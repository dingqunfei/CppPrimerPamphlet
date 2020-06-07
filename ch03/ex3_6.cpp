/**
 * @file ex3_6.cpp
 * @brief 
 * @author dqflying (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-06
 * 
 * @copyright Copyright (c) 2020  DQFLYING.INC
 * 
 * @par 新增文件:
 * 
 * 
 * Date              Version        Author         LISENCE
 * 2020-06-06        1.0            dqflying       XXXXXXX
 * Description:
 * 
 * 
 */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string output("qiu hong xiu");
    for(auto &x: output)
    {
        x = 'x';
    }
    std::cout << output << std::endl;

    return 0;
}