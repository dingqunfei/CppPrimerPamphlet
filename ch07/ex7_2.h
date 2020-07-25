/**
 * @file ex7_02.h
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
#include <string>

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