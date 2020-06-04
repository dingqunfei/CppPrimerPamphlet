/**
 * @file ex3_2.cpp
 * @brief 
 * @author dqflying (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-04
 * 
 * @copyright Copyright (c) 2020  DQFLYING.INC
 * 
 * @par 新增文件:
 * 
 * 
 * Date              Version        Author         LISENCE
 * 2020-06-04        1.0            dqflying       XXXXXXX
 * Description:
 * 
 * 
 */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string str;

    while(getline(std::cin, str, 's'))
    {
        std::cout << str << std::endl;
    }

    while(getline(std::cin, str))
    {
        std::cout << str << std::endl;
    }

    while(std::cin >> str)
    {
        std::cout << str << std::endl;
    }

    return 0;
}