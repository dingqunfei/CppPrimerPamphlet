/**
 * @file ex7_6.h
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-25
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-25
 * Version     : 1.0
 * Author      : dqflying
 * Lisence     : 
 * Description : 
 * 
 * 
 * 
 * 
 */



#include <string>
#include <iostream>

class Sales_data{
    public:
    std::string isbn() const { return BookNo; }
    Sales_data &combine(const Sales_data &item);

    
    std::string BookNo;
    unsigned int sold_unit;
    double revenue;
};

Sales_data & Sales_data::combine(const Sales_data &item)
{
    sold_unit += item.sold_unit;
    revenue += item.revenue;
    return *this;
}

std::ostream &print(std::ostream &out, const Sales_data &item)
{
    out << item.BookNo << " " << item.sold_unit << " " << item.revenue;
    return out;
}

std::istream &read(std::istream &in, Sales_data &item)
{
    in >> item.BookNo >> item.sold_unit >> item.revenue;
    return in;
}

Sales_data add(Sales_data &lhs, Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
    
}