/**
 * @file ex1_22.cpp
 * @brief 
 * @author dqflying (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-05-04
 * 
 * @copyright Copyright (c) 2020  DQFLYING.INC
 * 
 * @par 新增文件:
 * <table>
 * <tr><th>Date            <th>Version      <th>Author       <th>Description
 * <tr><td>2020-05-04      <td>1.0          <td>dqflying     <td>内容
 * </table>
 */

#include <iostream>
#include "../include/Sales_item.h"

int main(int argc, char **argv)
{
    Sales_item total, item;

    if (std::cin >> total)
    {
        /* code */
        while (std::cin >> item)
        {
            if (total.isbn() == item.isbn())
            {
                /* code */
                total = total + item;
            }
            else
            {
                std::cout << total << std::endl;
                total = item;
            }
        }
        std::cout << total << std::endl;
    }
    else
    {
        std::cerr << "No Data???" << std::endl;
        return -1;
    }
    
    return 0;
}