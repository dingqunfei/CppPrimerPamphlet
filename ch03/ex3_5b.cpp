/**
 * @file ex3_5b.cpp
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
    std::string temp, res;

    while(getline(std::cin, temp))
    {
        res += " " + temp;
    }

    std::cout << "All of input: " << res << std::endl;

    return 0;
}