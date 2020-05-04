/**
 * @file readSaleItem.cpp
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
    Sales_item item1, item2;

    std::cin >> item1 >> item2;
    if(item1.isbn() == item2.isbn())
    {
        std::cout << item1 + item2 << std::endl;
    }
    else
    {
        std::cout << "Different ISBN." << std::endl;
    }

    return 0;
}