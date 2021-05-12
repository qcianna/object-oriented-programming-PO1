#pragma once
#include <iostream>
#include <math.h>

class V
{
    public:
        V();
        explicit V(int n);
        V(const V& v);
        V(V&& v);
        ~V();
        int& at(int i) const;
        void print(std::string name) const;
        static double dot(const V& v1, const V& v2);
        operator double() const;
        double norm() const;
        static V sum(const V& v1, const V& v2);
        static V sum(const V& v1, const int n);

    private:
        int* _v;
        int _n;
};