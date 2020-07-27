/**
 * @file ex7_11.h
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-27
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-27
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

class Sales_data{
public:
    Sales_data() = default;
    Sales_data(std::string book_no);
    Sales_data(std::string book_no, size_t units, double price);
    Sales_data(std::istream &in);

    std::string isbn() const;
    std::string &combine(const Sales_data &item);

private:
    std::string BookNo;
    size_t sold_unit;
    double revenue;
};

Sales_data::Sales_data()
{
    Sales_data(std::string(" "), 0, 0.0);
}

Sales_data::Sales_data(std::string book_no):
    BookNo(book_no), sold_unit(0), revenue(0.0)
{

}

Sales_data::Sales_data(std::string book_no, size_t units, double price):
    BookNo(book_no), sold_unit(units), revenue(sold_unit * price)
{

}

Sales_data::Sales_data(std::istream &in)
{
    double price = 0.0;
    in >> BookNo >> sold_unit >> price;
    revenue = sold_unit * price;
}

std::string Sales_data::isbn() const
{
    return BookNo;
}

Sales_data &Sales_data::combine(const Sales_data &item)
{
    
}