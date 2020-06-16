/**
 * @file ex3_16.cpp
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

#include <string>
#include <iostream>
#include <vector>

int main(int argc, char **argv)
{
    std::vector<std::string> strVec;
    std::string inputStr;
    while(getline(std::cin, inputStr))
    {
        strVec.push_back(inputStr);
    }

    for (size_t i = 0; i < strVec.size(); i++)
    {
        /* code */
        std::cout << strVec[i] << std::endl;
    }

    for (auto str: strVec)
    {
        /* code */
        std::cout << str << std::endl;
    }
    
    

    return 0;
}