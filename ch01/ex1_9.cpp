/**
 * @file ex1_9.cpp
 * @brief 
 * @author dqflying (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-05-03
 * 
 * @copyright Copyright (c) 2020  DQFLYING.INC
 * 
 * @par 新增文件:
 * <table>
 * <tr><th>Date            <th>Version      <th>Author       <th>Description
 * <tr><td>2020-05-03      <td>1.0          <td>dqflying     <td>内容
 * </table>
 */

#include <iostream>

int summation(int low, int high)
{
    int sum = 0;
    for (size_t i = low; i <= high; i++)
    {
        /* code */
        sum += low;
    }
    return sum;
}

int main(int argc, char **argv)
{
    std::cout << "The summation of 50 to 100 is " << summation(50, 100) << std::endl;
    return 0;
}