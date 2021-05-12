#include "V.h"

V::V()
{
    _v=0;
    _n=0;
}

V::V(int n)
{
    _n=n;
    _v = new int[n];
    for(int i=0; i<n; i++)
    {
        _v[i]=0;
    }
}

V::V(const V& v)
{
    _n = v._n;
    _v = new int[_n];
    for(int i=0; i<_n; i++)
    {
        _v[i]=v._v[i];
    }
}

V::V(V&& v)
{
    _n = v._n;
    _v = new int[_n];
    for(int i=0; i<_n; i++)
    {
        _v[i]=v._v[i];
    }

    v._n=0;
    delete [] v._v;
    v._v=0;
}

V::~V()
{
    _n=0;
    delete [] _v;
    _v=0;
}

int& V::at(int i) const
{
    return _v[i];
}

void V::print(std::string name) const
{
    std::cout << name << "(";
    for(int i=0; i<_n; i++)
    {
        std::cout << _v[i];
        if(i<_n-1)
        {
            std::cout << ", ";
        }
    }
    std::cout << ")" << std::endl;
}

double V::dot(const V& v1, const V& v2)
{
    double il_skalarny = 0;
    if(v1._n != v2._n)
    {
        std::cout << "Error, vectors of different dimensions!" << std::endl;
        return 0;
    }
    for(int i=0; i<v1._n; i++)
    {
        il_skalarny += v1._v[i]*v2._v[i];
    }
    return il_skalarny;
}

V::operator double() const
{
    return norm();
}

double V::norm() const
{
    double norm = 0;
    for(int i=0; i<_n; i++)
    {
        norm += pow(_v[i], 2);
    }
    return(sqrt(norm));
}

V V::sum(const V& v1, const V& v2)
{
    V suma(v1._n);

    for(int i=0; i<suma._n; i++)
    {
        suma._v[i] = v1._v[i] + v2._v[i];
    }
    return suma;
}

V V::sum(const V& v1, const int n)
{
    V suma(v1._n);

    for(int i=0; i<suma._n; i++)
    {
        suma._v[i] = v1._v[i] + n;
    }
    return suma;
}