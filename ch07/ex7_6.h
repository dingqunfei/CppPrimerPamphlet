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

class Person{

public:
    std::string get_name() const
    {
        return Name;
    }
    std::string get_address() const
    {
        return Address;
    }


private:
    std::string Name;
    std::string Address;

};