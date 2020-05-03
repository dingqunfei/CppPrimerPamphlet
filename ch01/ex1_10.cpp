/**
 * @file ex1_10.cpp
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
 * <tr><td>2020-05-03      <td>1.0          <td>dqflying     <td>print 10 to 0
 * </table>
 */

#include <iostream>

int main(int argc, char **argv)
{
    int i = 10;
    while (i >= 0)
    {
        /* code */
        std::cout << i << std::endl;
        --i;
    }
    
    return 0;
}