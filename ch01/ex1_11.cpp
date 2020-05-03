/**
 * @file ex1_11.cpp
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
 * <tr><td>2020-05-03      <td>1.0          <td>dqflying     <td>打印出两个整数范围内的所有数
 * </table>
 */

#include <iostream>

int main(int argc, char **argv)
{
    int start, end;
    std::cout << "Please input two integer: " << std::endl;
    std::cin >> start >> end;

    if (start > end)
    {
        /* code */
        int temp = start;
        start = end;
        end = temp;
    }
    while (start <= end)
    {
        /* code */
        std::cout << start++ << std::endl;
    }
    
    return 0;
}