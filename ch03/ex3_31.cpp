/**
 * @file ex3_31.cpp
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
    const int len = 100;
    int arr[len];

    for (size_t i = 0; i < len; ++i)
    {
        /* code */
        arr[i] = i;
    }
    
    int *ptrofend = &arr[len];

    int distance = ptrofend - arr;

    int *arrbeg = std::begin(arr);
    int *arrend = std::end(arr);

    if (arrbeg == arr && arrend == ptrofend)
    {
        /* code */
        std::cout << "Get iterator SECCED" << std::endl;
    }
    

    return 0;
}