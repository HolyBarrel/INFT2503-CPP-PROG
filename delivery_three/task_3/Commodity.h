#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
using namespace std;

class Commodity {
  public:
    Commodity(const string name_, int id_, double price_);
    static const double SALES_TAX;
    string get_name() const;
    int get_id() const;
    double get_price(double quantity_) const;
    double get_price() const;
    void set_price(double price_);
    double get_price_with_sales_tax(double quantity_) const;
    double get_price_with_sales_tax() const;
    
    
  private:
    string name;
    int id;
    double price;
};

#endif
