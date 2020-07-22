/**
 * @file ex6_54_55_56.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-22
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-22
 * Version     : 1.0
 * Author      : dqflying
 * Lisence     : 
 * Description : 
 * 
 * 
 * 
 * 
 */

#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::cout;


inline int f(const int, const int);
typedef decltype(f) fp;

inline int NumAdd(const int n1, const int n2) { return n1 + n2; }
inline int NumSub(const int n1, const int n2) { return n1 - n2; }
inline int NumMul(const int n1, const int n2) { return n1 * n2; }
inline int NumDiv(const int n1, const int n2) { return n1 / n2; }

vector<fp*> v{NumAdd, NumSub, NumMul, NumDiv};

int main(int argc, char **argv)
{
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        /* code */
        cout << (*it)(2, 2) << std::endl;
    }
    

    return 0;
}