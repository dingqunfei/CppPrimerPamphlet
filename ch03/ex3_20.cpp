/**
 * @file ex3_20.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-20
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

#include <vector>
#include <iostream>

int main(int argc, char **argv)
{
    std::vector<int> intVec;
    int len = 10;
    for (size_t i = 0; i < len; i++)
    {
        /* code */
        intVec.push_back(i * (i - 1));
    }

    for (size_t i = 0; i < len-1; ++i)
    {
        /* code */
        std::cout << intVec[i] + intVec[i+1] << std::endl;
    }

    int mid = (len+1)/2;
    for (size_t i = 0; i < mid; ++i)
    {
        /* code */
        std::cout << intVec[i] + intVec[len-mid-1] << std::endl;
    }
    

    return 0;
}