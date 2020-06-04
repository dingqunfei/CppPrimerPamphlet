/**
 * @file ex3_4a.cpp
 * @brief 
 * @author dqflying (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-05
 * 
 * @copyright Copyright (c) 2020  DQFLYING.INC
 * 
 * @par 新增文件:
 * 
 * 
 * Date              Version        Author         LISENCE
 * 2020-06-05        1.0            dqflying       XXXXXXX
 * Description:
 * 
 * 
 */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string str1, str2;

    std::cout << "Please input first string:" << std::endl;
    std::cin >> str1;
    std::cout << "Please input second string:" << std::endl;
    std::cin >> str2;

    if (str1 == str2)
    {
        /* code */
        std::cout << "string str1 is equal to str2." << std::endl;
    }
    else 
    {
        /* code */
        std::cout << ((str1 > str2)? str1:str2) << std::endl;
    }

    return 0;
    
}