/**
 * @file ex7_3.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-24
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-24
 * Version     : 1.0
 * Author      : dqflying
 * Lisence     : 
 * Description : 
 * 
 * 
 * 
 * 
 */

#include "ex7_2.h"
#include <iostream>

int main(int argc, char **argv)
{
    Sales_data total;
    std::cout << "Please input Sales data: BookNo, sold_unit and revenud" << std::endl;
    if (std::cin >> total.BookNo >> total.sold_unit >> total.revenue)
    {
        /* code */
        Sales_data trans;
        while(std::cin >> trans.BookNo >> trans.sold_unit >> trans.revenue)
        {
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                std::cout << "Sales data: " << trans.BookNo << " " <<
                trans.sold_unit << " " << trans.revenue << std::endl;
                total = trans;
            }
        }
        std::cout << "Sales data: " << total.BookNo << " " <<
                total.sold_unit << " " << total.revenue << std::endl;
    }
    else
    {
        std::cerr << "No data ?!" << std::endl;
    }
    
    

    return 0;
}