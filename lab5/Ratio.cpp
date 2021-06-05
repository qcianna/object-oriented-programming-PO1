#include "Ratio.h"

Ratio::Ratio(Primitive& a, Primitive& b): _a(a), _b(b)
{}

double Ratio::get_l() const
{
  return _a.get_l() / _b.get_l();
}

void Ratio::print_formula() const
{
  std::cout << "(";
  _a.print_formula();
  std::cout << "/";
  _b.print_formula();
  std::cout << ")";
}