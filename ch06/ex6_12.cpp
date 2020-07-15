/**
 * @file ex6_10.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-14
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-14
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

void int_swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main(int argc, char **argv)
{
    int a = 0, b = 10;
    int_swap(a, b);
    std::cout << "a`s value: " << a << std::endl;
    std::cout << "b`s value: " << b << std::endl;

    return 0;
}
