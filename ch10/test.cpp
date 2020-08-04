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

    return 0;  
}