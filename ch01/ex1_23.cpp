/**
 * @file ex1_23.cpp
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
    int times = 0;
    Sales_item currItem, lastItem;

    if (std::cin >> lastItem)
    {
        /* code */
        ++times;
        while (std::cin >> currItem)
        {
            /* code */
            if (currItem.isbn() == lastItem.isbn())
            {
                /* code */
                ++times;
            }
            else
            {
                /* code */
                std::cout << lastItem << " occurs " << times << std::endl;
                lastItem = currItem;
                times = 1;
            }
        }
        std::cout << lastItem << " occurs " << times << std::endl;
    }
    
    

    return 0;
}