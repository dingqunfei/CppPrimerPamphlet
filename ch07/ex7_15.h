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

class Person;

std::istream &read(std::istream &in, Person &one);
std::ostream &print(std::ostream &out, const Person &one);


class Person{

friend std::istream &read(std::istream &in, Person &one);
friend std::ostream &print(std::ostream &out, const Person &one);

private:
    std::string Name;
    std::string Address;

public:
    Person() = default;
    Person(std::string name):Name(name), Address("") {}
    Person(std::string name, std::string address): Name(name), Address(address) {}
    Person(std::istream &in) { read(in, *this); }

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