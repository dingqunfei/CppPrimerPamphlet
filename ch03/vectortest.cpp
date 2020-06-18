/**
 * @file vectortest.cpp
 * @brief 
 * @author dqflying (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-08
 * 
 * @copyright Copyright (c) 2020  DQFLYING.INC
 * 
 * @par 新增文件:
 * 
 * 
 * Date              Version        Author         LISENCE
 * 2020-06-08        1.0            dqflying       XXXXXXX
 * Description:
 * 
 * 
 */

#include <vector>
#include <string>
#include <iostream>

int main(int argc, char **argv)
{
    std::vector<std::string> strVec(10);
    std::vector<int> intVec(10);

    std::vector<int> intVec1;
    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        intVec1.push_back(i);
    }
    for (auto &elem: intVec1)
    {
        /* code */
        elem *= elem;
    }
    for (auto beg = intVec1.begin(); beg != intVec1.end(); ++beg)
    {
        /* code */
        std::cout << *beg << std::endl;
    }
    
    
    
    std::string line;
    std::vector<std::string> strVec1;
    while(getline(std::cin, line))
    {
        strVec1.push_back(line);
    }



    return 0;
}