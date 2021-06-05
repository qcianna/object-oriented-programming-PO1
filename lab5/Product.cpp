#include "Product.h"

Product::Product(Primitive& a, Primitive& b): _a(a), _b(b)
{}

double Product::get_l() const
{
  return _a.get_l() * _b.get_l();
}

void Product::print_formula() const
{
  std::cout << "(";
  _a.print_formula();
  std::cout << "*";
  _b.print_formula();
  std::cout << ")";
}