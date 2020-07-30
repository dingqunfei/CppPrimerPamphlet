/**
 * @file ex7_26.h
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-30
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-30
 * Version     : 1.0
 * Author      : dqflying
 * Lisence     : 
 * Description : 
 * 
 * 
 * 
 * 
 */


#include <iostream>
#include <string>
#include <vector>

class Sales_data;
std::istream &read(std::istream &in, Sales_data &item);
std::ostream &print(std::ostream &out, const Sales_data &item);
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);


class Sales_data{

friend std::istream &read(std::istream &in, Sales_data &item);
friend std::ostream &print(std::ostream &out, const Sales_data &item);
friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

public:
    Sales_data() = default; //inline function
    Sales_data(std::string book_no);
    Sales_data(std::string book_no, size_t units, double price);
    Sales_data(std::istream &in) { read(in, *this); }

    std::string isbn() const;
    size_t get_sold() const;
    double get_revenue() const;
    Sales_data &combine(const Sales_data &item);
    double avg_price() const;

private:
    std::string BookNo;
    size_t sold_unit;
    double revenue;
};

//inline function, error define in out
/*
Sales_data::Sales_data():
    BookNo(" "), sold_unit(0), revenue(0.0)
{

}
*/

Sales_data::Sales_data(std::string book_no):
    BookNo(book_no), sold_unit(0), revenue(0.0)
{

}

Sales_data::Sales_data(std::string book_no, size_t units, double price):
    BookNo(book_no), sold_unit(units), revenue(sold_unit * price)
{

}


std::string Sales_data::isbn() const
{
    return BookNo;
}

size_t Sales_data::get_sold() const
{
    return sold_unit;
}

double Sales_data::get_revenue() const
{
    return revenue;
}

Sales_data &Sales_data::combine(const Sales_data &item)
{
    if (BookNo == item.BookNo)
    {
        sold_unit += item.sold_unit;
        revenue += item.revenue;
    }
    return *this;
}

inline double Sales_data::avg_price() const
{
    return sold_unit ? revenue/sold_unit : 0;
}

std::istream &read(std::istream &in, Sales_data &item)
{
    in >> item.BookNo >> item.sold_unit >> item.revenue;
    return in;
}

std::ostream &print(std::ostream &out, const Sales_data &item)
{
    out << item.BookNo << " " << item.sold_unit << " " << item.revenue;
    return out;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data temp = lhs;
    temp.combine(rhs);
    return temp;
}