/**
 * @file test.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-08-02
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-08-02
 * Version     : 1.0
 * Author      : dqflying
 * Lisence     : 
 * Description : 
 * 
 * 
 * 
 * 
 */

#include <string>
#include <vector>

int main(int argc, char **argv)
{
    std::string str = "abc";
    char *ch = "abc";

    for (std::size_t i = 0; i < 10; i++)
    {
        /* code */
        str.push_back('q');
    }
    

    return 0;
}