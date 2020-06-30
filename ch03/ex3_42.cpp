/**
 * @file ex3_42.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-25
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
#include <vector>

int main(int argc, char **argv)
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    int arr[10];
    for (int i = 0; i != v.size(); ++i) arr[i] = v[i];

    for (auto i : arr) std::cout << i << " ";
    std::cout << std::endl;

    return 0;
    
    
    

    return 0;
}