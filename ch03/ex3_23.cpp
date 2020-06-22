/**
 * @file ex3_23.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-22
 * 
 * @copyright Copyright (c) 2020 DQFLYING.INC
 * 
 * @par:
 * 
 * 
 * Date              Version        Author         LISENCE
 * 2020-06-03        1.0            dqflying       XXXXXXX
 * Description:
 * 
 * 
 * 
 */

#include <iostream>
#include <vector>

int main(int argc, char **argv)
{
    std::vector<int> intVec;
    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        intVec.push_back(i);
    }

    for (auto &elem: intVec)
    {
        /* code */
        elem *= 2;
        std::cout << elem << std::endl;
    }

    for (auto beg = intVec.begin(); beg != intVec.end(); ++beg)
    {
        /* code */
        *beg *= 2;
        std::cout << *beg << std::endl;
    }
    

    
    

    return 0;
}