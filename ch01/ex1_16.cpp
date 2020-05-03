/**
 * @file ex1_16.cpp
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
 * <tr><td>2020-05-04      <td>1.0          <td>dqflying     <td>多个输入数之和
 * </table>
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int input = 0, sum = 0;
    while(cin >> input)
    {
        sum += input;
    }
    cout << "Sum of inputs is " << sum << "." << endl;

    return 0;
}