/**
 * @file ex3_17.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-19
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
#include <string>
#include <vector>

int main(int argc, char **argv)
{
    std::vector<std::string> strVec;
    std::string inputStr;
    std::cout << "Please input your words, ending with CTRL+D" << std::endl;
    while (std::cin >> inputStr)
    {
        /* code */
        strVec.push_back(inputStr);
    }

    std::cout << "Now convert to upper case letters ..." << std::endl;

    for (auto &str: strVec)
    {
        /* code */
        for (auto &letter: str)
        {
            /* code */
            letter = toupper(letter);
        }
        std::cout << str << std::endl;
        
    }
    
    

    return 0;
}