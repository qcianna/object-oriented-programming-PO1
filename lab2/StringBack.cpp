#include "StringBack.h"

StringBack::StringBack(): _n(0), _text(nullptr), _next(nullptr)
{}

StringBack::StringBack(const char* text)
{
    _n = strlen(text);
    _text = new char[_n + 1];
    strcpy(_text, text);
    _next = nullptr;
}

StringBack::StringBack(StringBack&& s): _text(std::exchange(s._text, nullptr)), _n(std::exchange(s._n, 0)), _next(std::exchange(s._next, nullptr)) 
{}

void StringBack::del()
{
    if(_text)
    {
        delete[] _text;
        _n = 0;
        delete _next;
    }
}

StringBack::~StringBack()
{
    del();
}

void StringBack::operator -=(const char* text)
{
    *this -= StringBack(text);
}

void StringBack::operator -=(StringBack* s)
{
    if(!_next)
    {
        _next = s;
    }
    
	else
    {
        *_next -= s;
    }
}

void StringBack::operator -=(StringBack&& s)
{
	StringBack* text = new StringBack(std::move(s));
	*this -= text;
}

void StringBack::operator =(StringBack&& s)
{
    del();

    _text = std::exchange(s._text, nullptr);
	_n = std::exchange(s._n, 0);
	_next = std::exchange(s._next, nullptr);
}

int StringBack::size() const
{
    if(!_next)
    {
        return _n;
    }

	else
    {
        return _n + _next->size();
    }
}

int StringBack::fragments() const
{
    if(!_next)
    {
        return 1;
    }

	else return 1 + _next->fragments();
}

std::ostream& operator <<(std::ostream& stream, const StringBack& s)
{
    if(s.size() > 0)
    {
        for(int i=s.fragments()-1; i>=0; i--)
        {
            stream << s.fragment(i)._text << " ";
        }
    }
    return stream;
}

const StringBack& StringBack::fragment(const int i) const
{
    if(i == 0)
    {
        return *this;
    }

	else return _next->fragment(i-1);

}

const char* StringBack::str() const
{
    return _text;
}