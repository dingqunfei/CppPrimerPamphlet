/**
 * @file ex3_10.cpp
 * @brief 
 * @author dqflying (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-07
 * 
 * @copyright Copyright (c) 2020  DQFLYING.INC
 * 
 * @par 新增文件:
 * 
 * 
 * Date              Version        Author         LISENCE
 * 2020-06-07        1.0            dqflying       XXXXXXX
 * Description:
 * 
 * 
 */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string input("");
    std::cout << "Enter a string to print:" << std::endl;
    while (getline(std::cin, input))
    {
        for (auto a: input)
        {
            if (!ispunct(a))
            {
                std::cout << a;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}