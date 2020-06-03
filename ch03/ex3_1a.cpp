/**
 * @file ex3_1a.cpp
 * @brief 
 * @author dqflying (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-03
 * 
 * @copyright Copyright (c) 2020  DQFLYING.INC
 * 
 * @par 新增文件:
 * 
 * 
 * Date              Version        Author         LISENCE
 * 2020-06-03        1.0            dqflying       XXXXXXX
 * Description:
 * 
 * 
 */

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int sum = 0;
    for (int val = 1; val <= 10; ++val) sum += val;
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;

    return 0;
}