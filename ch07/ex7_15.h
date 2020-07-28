/**
 * @file ex7_15.h
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-29
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-29
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

class Person{

public:
    std::string Name;
    std::string Address;

    std::string get_name() const
    {
        return Name;
    }

    std::string get_address() const
    {
        return Address;
    }
};


std::istream &read(std::istream &in, Person &one)
{
    in >> one.Name >> one.Address;
    return in;
}

std::ostream &print(std::ostream &out, const Person &one)
{
    out << one.Name << " " << one.Address;
    return out;
}