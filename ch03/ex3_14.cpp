/**
 * @file ex3_15.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-17
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
    int input;
    while(std::cin >> input)
    {
        intVec.push_back(input);
    }

    return 0;
}