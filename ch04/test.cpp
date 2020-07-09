/**
 * @file test.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-05
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-05
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

int main(int argc, char **argv)
{
    bool b = true;
    int a = b;
    bool br = -b;


    int *pi;
    pi = 0;

    int x[10];   int *p = x;
    std::cout << sizeof(x)/sizeof(*x) << std::endl;
    std::cout << sizeof(p)/sizeof(*p) << std::endl;


    double d;
    void *ptr = &d;
    double *dp = static_cast<double *>(ptr);

    return 0;
}