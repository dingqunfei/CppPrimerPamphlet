/**
 * @file ex3_35.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-24
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
#include <iterator>

int main(int argc, char **argv)
{
    int arr[10];
    for (size_t i = 0; i < 10; ++i)
    {
        /* code */
        arr[i] = i;
    }

    int *arrbeg = std::begin(arr);
    int *arrend = std::end(arr);
    for (; arrbeg != arrend; ++arrbeg)
    {
        /* code */
        *arrbeg = 0;
    }
    
    

    return 0;
}