/**
 * @file test.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-08-16
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-08-16
 * Version     : 1.0
 * Author      : dqflying
 * Lisence     : 
 * Description : 
 * 
 * 
 * 
 * 
 */

#include <utility>
#include <hash_map>
#include <string>

#include <map>
#include <vector>
#include <set>

std::pair<std::string, std::string> name;

int main()
{
    name.first = "ding";
    name.second = "qunfei";

    std::vector<int> intVec = {2, 4, 6, 8, 2, 4, 6, 8};
    std::set<int> intSet(intVec.cbegin(), intVec.cend());
    intSet.insert({1, 3, 5, 7, 1, 3, 5, 7});

    std::map<std::string, int> wordCount;
    wordCount.insert({"ding", 1});
    wordCount.insert(std::make_pair("qun", 1));
    wordCount.insert(std::pair<std::string, int>("fei", 1));

    auto res = std::hash<std::string>()("dingqunfei");
    return 0;
}