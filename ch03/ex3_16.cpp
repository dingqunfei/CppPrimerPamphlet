/**
 * @file ex3_16.cpp
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
    std::vector<int> v1, v2(10), v3(10, 42), v4{10}, v5{10, 42};
    std::vector<std::string> v6{10}, v7{10, "hi"};

    std::cout << "vl size: " << v1.size() << std::endl;
    for (auto elem: v1)
    {
        /* code */
        std::cout << elem << std::endl;
    }

    std::cout << "v2 size: " << v2.size() << std::endl;
    for (auto elem: v2)
    {
        /* code */
        std::cout << elem << std::endl;
    }

    std::cout << "v3 size: " << v3.size() << std::endl;
    for (auto elem: v3)
    {
        /* code */
        std::cout << elem << std::endl;
    }

    std::cout << "v4 size: " << v4.size() << std::endl;
    for (auto elem: v4)
    {
        /* code */
        std::cout << elem << std::endl;
    }

    std::cout << "v5 size: " << v5.size() << std::endl;
    for (auto elem: v5)
    {
        /* code */
        std::cout << elem << std::endl;
    }

    std::cout << "v6 size: " << v6.size() << std::endl;
    for (auto elem: v6)
    {
        /* code */
        std::cout << elem << std::endl;
    }

    std::cout << "v7 size: " << v7.size() << std::endl;
    for (auto elem: v7)
    {
        /* code */
        std::cout << elem << std::endl;
    }
    

    return 0;
}