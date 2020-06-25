/**
 * @file ex3_41.cpp
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

#include <iterator>
#include <vector>

int main(int argc, char **argv)
{
    int intArr[] = {3, 9, 10, 20, 44, 31, 29};
    std::vector<int> intVec(std::begin(intArr), std::end(intArr));

    return 0;
}