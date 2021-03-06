/**
 * @file ex2_42.h
 * @brief 
 * @author dqflying (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-03
 * 
 * @copyright Copyright (c) 2020  DQFLYING.INC
 * 
 * @par 新增文件:
 * 
 * 
 * Date              Version        Author         LISENCE
 * 2020-06-03        1.0            dqflying       XXXXXXX
 * Description:
 * 
 * 
 */

#ifndef EX2_42_H
#define EX2_42_H

#include <string>
#include <iostream>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    void CalcRevenue(double price);
    double CalcAveragePrice();
    void SetData(Sales_data data);
    void AddData(Sales_data data);
    void Print();
};

void Sales_data::CalcRevenue(double price)
{
    revenue = units_sold * price;
}

void Sales_data::SetData(Sales_data data)
{
    bookNo = data.bookNo;
    units_sold = data.units_sold;
    revenue = data.revenue;
}

void Sales_data::AddData(Sales_data data)
{
    if (bookNo != data.bookNo) return;
    units_sold += data.units_sold;
    revenue += data.revenue;
}

double Sales_data::CalcAveragePrice()
{
    if (units_sold != 0)
        return revenue / units_sold;
    else
        return 0.0;
}

void Sales_data::Print()
{
    std::cout << bookNo << " " << units_sold << " " << revenue << " ";
    double averagePrice = CalcAveragePrice();
    if (averagePrice != 0.0)
        std::cout << averagePrice << std::endl;
    else
        std::cout << "(no sales)" << std::endl;
}


#endif