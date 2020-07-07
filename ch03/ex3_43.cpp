/**
 * @file ex3_43.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-02
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-02
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
#include <iterator>

int main(int argc, char **argv)
{
    int arr[3][4] = 
    {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    for(const int(&row)[4]: arr)
    {
        for(int col: row)
        {
            std::cout << col << std::endl;
        }
    }

    // for loop
    for (size_t i = 0; i != 3; ++i)
        for (size_t j = 0; j != 4; ++j) std::cout << arr[i][j] << std::endl;

    // using pointers.
    for (int(*row)[4] = arr; row != arr + 3; ++row)
        for (int *col = *row; col != *row + 4; ++col) std::cout << *col << std::endl;;


    return 0;
}