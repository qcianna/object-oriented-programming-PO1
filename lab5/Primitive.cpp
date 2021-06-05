#include "Primitive.h"

Primitive::Primitive()
{
  _l = 0;
}

Primitive::Primitive(double l)
{
  _l = l;
}

void Primitive::PrintWithValue() const
{
  print_formula();
  std::cout << " = " << get_l() << std::endl;
}

void Primitive::Set(double l)
{
  _l = l;
}

double Primitive::get_l() const
{
  return _l;
}

void Primitive::print_formula() const
{
  std::cout << _l;
}



