#include "Sum.h"

Sum::Sum(Primitive& a, Primitive& b): _a(a), _b(b)
{}

double Sum::get_l() const
{
  return _a.get_l() + _b.get_l();
}

void Sum::print_formula() const
{
  std::cout << "(";
  _a.print_formula();
  std::cout << "+";
  _b.print_formula();
  std::cout << ")";
}