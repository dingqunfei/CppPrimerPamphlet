
/**
 * @file ex6_33.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-18
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-18
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
#include <vector>

void (*pf)(const std::vector<int>::iterator beg, const std::vector<int>::iterator end);

void print_vector(const std::vector<int>::iterator beg, const std::vector<int>::iterator end)
{
    if (end-beg > 0)
    {
        std::cout << *beg << std::endl;
        print_vector(beg+1, end);
    }
    
}

int main(int argc, char **argv)
{
    std::vector<int> intVec{0, 1, 2, 3, 4 ,5 ,6 ,7, 8, 9, 10};
    //print_vector(intVec.begin(), intVec.end());
    //pf = print_vector;
    pf = &print_vector;
    pf(intVec.begin(), intVec.end());
    return 0;
}