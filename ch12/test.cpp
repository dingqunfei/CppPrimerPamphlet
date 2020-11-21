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
#include <iostream>
#include <utility>


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

    std::shared_ptr<int> pi4(pi3);
    std::shared_ptr<int> pi5(pi4);
    std::weak_ptr<int> pi6(pi5);
    std::cout << "pi4 ref count: " << pi4.use_count() << std::endl;
    std::cout << "pi5 ref count: " << pi5.use_count() << std::endl;

    pi5.reset(pi1);
    std::cout << "pi4 ref count: " << pi4.use_count() << std::endl;
    std::cout << "pi5 ref count: " << pi5.use_count() << std::endl;

    std::unique_ptr<int []> duptr(new int[100]);
    //error, shared_ptr 
    //std::shared_ptr<int []> dsptr(new int[100]);
    std::shared_ptr<int> dsptr(new int[100], [](int *p){ delete [] p;});

    std::allocator<std::string> strAllocator;
    auto const pAlloc = strAllocator.allocate(100);


    int rr = 10;
    int &&rs = std::move(rr);
    std::cout << rs << std::endl;
    std::cout << rr << std::endl;
    return 0;
}