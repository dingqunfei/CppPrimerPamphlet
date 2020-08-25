/**
 * @file test.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-08-19
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-08-19
 * Version     : 1.0
 * Author      : dqflying
 * Lisence     : 
 * Description : 
 * 
 * 
 * 
 * 
 */

#include <memory>
#include <string>
#include <vector>
#include <new>

int main(int argc, char **argv)
{
    std::shared_ptr<std::string> sh_ptr_str;
    std::shared_ptr<std::vector<std::string>> sh_ptr_vec;

    if (sh_ptr_str && sh_ptr_str->empty())
    {
        /* code */
        *sh_ptr_str = "hx";
    }
    
    auto smart_ptr = std::make_shared<std::string>("dingqunfei");
    auto smart_ptr1 = std::make_shared<std::vector<std::string>>();


    auto p = std::make_shared<int>(42);
    auto p1(p);
    int cnt = p.use_count();


    int *pi = new int(100);
    int *pi1 = new int(0);
    int *pi2 = new (std::nothrow) int(1);
    int *pi3 = new (std::nothrow) int[100];

    delete pi3;

    return 0;
}