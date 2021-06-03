#include "ZlozenieFunkcji.h"

void ZlozenieFunkcji::insert(std::function<double(double x)> func)
{
    _fun.push_back(func);
}

double ZlozenieFunkcji::wynik(double x)
{
    _results.clear();
	_results.push_back(_fun[0](x));
	for(int i = 1; i<_fun.size(); i++)
	{
		_results.push_back(_fun[i](_results[i-1]));
	}
	return _results[_results.size()-1];
}

double ZlozenieFunkcji::operator[] (int i)
{
    return _results[i];
}