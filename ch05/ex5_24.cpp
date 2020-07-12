/**
 * @file ex5_24.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-12
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-12
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
#include <exception>
#include <stdexcept>
#include <new>
#include <typeinfo>

int main(int argc, char **argv)
{
    int x, y;
    std::cout << "Please input two numbers: " << std::endl;
    std::cin >> x >> y;
    if (y == 0)
    {
        /* code */
        throw std::runtime_error("diviser is 0");
    }
    else
    {
        /* code */
        std::cout << x/y << std::endl;

    }
    
    

    return 0;
}