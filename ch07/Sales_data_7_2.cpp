// 7.2 类的封装及友元函数

#include <iostream>

using namesapce std;

class Sales_data {
friend Sales_data add(const Sales_data&, const Sales_data&);
friend istream &read(istream&, Sales_data&);
friend ostream &print(ostream&, const Sales_data&);
    
public:
    Sales_data() = default;
    Sales_data(const string &s): bookNo(s) {}
    Sales_data(const string &s, unsigned n, double p):
                bookNo(s), units_sold(n), revenue(p*n) {}
    Sales_data(istream &);

    string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
private:
    double ave_price() const;

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data::Sales_data(istream &is)
{
    read(is, *this);
}

double Sales_data::ave_price() const {
    if ( units_sold ) 
        return revenue / units_sold;
    else 
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data & rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}


istream &read(istream & is, Sales_data & item)
{
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;

    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
        << item.revenue << " " << item.avg_price();

    return os;
}

Sales_data& add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);

    return sum;
}





