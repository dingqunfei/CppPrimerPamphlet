/**
 * @file ex2_8.cpp
 * @brief 
 * @author dqflying (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-05-09
 * 
 * @copyright Copyright (c) 2020  DQFLYING.INC
 * 
 * @par 新增文件:
 * <table>
 * <tr><th>Date            <th>Version      <th>Author       <th>Description
 * <tr><td>2020-05-09      <td>1.0          <td>dqflying     <td>内容
 * </table>
 */

#include <iostream>

int main(int argc, char **argv)
{
    std::cout << "\62\115\12" ;
    //std::cout << "\50\77\10" ;
    std::cout << "\x32\x4D\x0A" ;

    std::cout << "\62\11\115\12" ;
    //std::cout << "\50\9\77\10" ;
    std::cout << "\x32\x09\x4D\x0A" ;

    return 0;
}