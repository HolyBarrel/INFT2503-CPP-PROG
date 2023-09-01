#include "Commodity.h"

Commodity::Commodity(const string name_, int id_, double price_)
  : name(name_), id(id_), price(price_) {}
const double Commodity::SALES_TAX = 1.25;
string Commodity::get_name() const
{
  return this->name;
}

int Commodity::get_id() const
{
  return this->id;
}

double Commodity::get_price(double quantity_) const
{
  return this->price * quantity_;
}

double Commodity::get_price() const
{
  return this->price;
}

void Commodity::set_price(double price_)
{
  this->price = price_;
}

double Commodity::get_price_with_sales_tax(double quantity_) const
{
    return this->price * this->SALES_TAX * quantity_;
}

double Commodity::get_price_with_sales_tax() const
{
    return this->price * this->SALES_TAX;
}
