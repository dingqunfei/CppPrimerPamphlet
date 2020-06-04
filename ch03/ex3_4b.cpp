/**
 * @file ex3_4b.cpp
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

    auto len1 = str1.size(), len2 = str2.size();

    std::cout << ((len1 > len2) ? len1 : len2) << std::endl;

    return 0;
}