/**
 * @file ex5_25.cpp
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

    while(std::cin >> x >> y)
    {
        try
        {
            /* code */
            std::cout << x/y << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            std::cerr << "Try againg? Enter y or n:" << '\n';
            char input;
            std::cin >> input;
            if (!std::cin || input == 'n')
            {
                /* code */
                break;
            }
            
        }
    }
    
    
    
    
    

    return 0;
}