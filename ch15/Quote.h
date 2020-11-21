/**
 * @file Quote.h
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-10-25
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-10-25
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

class Quote{

public:
    std::string isbn() const;
    virtual double net_price(size_t n) const;
};

class Bulk_Quote: public Quote{

public:
    double net_price(size_t n) const override;
};