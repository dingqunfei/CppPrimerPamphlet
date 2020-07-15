/**
 * @file ex6_17.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-15
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-15
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

bool any_capital(const std::string &str)
{
    for (auto ch : str)
    {
        /* code */
        if (isupper(ch))
        {
            /* code */
            return true;
        }
    }
    return false;
}

void to_lowercase(std::string &str)
{
    for(auto &ch : str)
    {
        ch = toupper(ch);
    }
}

int main(int argc, char **argv)
{
    std::string str = "abcABCxyzXYZ";
    bool is_cap = any_capital(str);
    to_lowercase(str);
    std::cout << is_cap << std::endl;
    std::cout << str << std::endl;
    return 0;
}