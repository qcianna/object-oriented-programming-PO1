#pragma once
#include <iostream>

class Object
{
    public:
        Object(std::string name): _name(name)
        {}

        void Print() const
        {
            std::cout << "name: " << _name << std::endl;
        }
    
    private:
        std::string _name;
};

template <typename T>
class UniquePointer
{
    friend std::ostream& operator <<(std::ostream& stream, const UniquePointer& p)
    {
        stream << " [pointing to " << p._pointer << "]";
        return stream;
    }

    friend void PrintObject(UniquePointer<T> p)
    {
        std::cout << p;
    }

    public:
        UniquePointer(): _pointer(nullptr)
        {}

        UniquePointer(T* t): _pointer(t)
        {}

        ~UniquePointer()
        {
            if(_pointer)
                delete _pointer;
        }

        T& operator*()
        {
            return *(_pointer);
        }

        T* operator->()
        {
            return (_pointer);
        }

        UniquePointer(UniquePointer& p)
        {
            _pointer = p._pointer;
            p._pointer = nullptr;
        }

        UniquePointer(UniquePointer&& p)
        {
            _pointer = p._pointer;
            delete p._pointer;
        }

        UniquePointer& operator=(UniquePointer& p)
        {
            if (_pointer != p._pointer)
            {
                delete _pointer;
                _pointer = p._pointer;
                p._pointer = nullptr;
            }
            return *this;
        }

    private:
        T* _pointer;
};

