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
    
    return 0;
}