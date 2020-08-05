/**
 * @file test.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-08-03
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-08-03
 * Version     : 1.0
 * Author      : dqflying
 * Lisence     : 
 * Description : 
 * 
 * 
 * 
 * 
 */

#include <vector>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <iterator>

int main(int argc, char **argv)
{
    std::vector<int> intVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 1, 2, 3, 1, 2, 1};

    int sum = std::accumulate(intVec.cbegin(), intVec.cend(), 0);

    int count_1 = std::count(intVec.cbegin(), intVec.cend(), 1);

    std::vector<std::string> strVec = {"abc", "defg", "hijk", "lmn", "opq", "rst"};

    //error, "||||" const char*
    //std::string sumStr = std::accumulate(strVec.cbegin(), strVec.cend(), "||||");
    std::string sumStr = std::accumulate(strVec.cbegin(), strVec.cend(), std::string("||||"));

    std::fill(intVec.begin(), intVec.end(), 0);

    std::vector<int> vec;
    //error, std::fill_n(vec.begin(), 10, 0);
    std::fill_n(back_inserter(vec), 10, 0);
    std::replace(vec.begin(), vec.end(), 0, 11);

    std::vector<std::string> strNameVec{"qiu", "hong", "xiu", "ding", "qun", "fei"};
    std::stable_sort(strNameVec.begin(), strNameVec.end(), [](const std::string &a, const std::string &b) { return a > b;});

    auto f = [](const int a, const int b){ return a + b;};
    auto result = f(3, 4);

    return 0;  
}