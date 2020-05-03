/**
 * @file inputs.cpp
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

int main(int argc, char **argv)
{
    int numStudents = 0;
    float score = 0.0, totalScores = 0.0, avg = 0.0;
    std::cout << "Input scores of all students with blankspaces: " << std::endl;
    while(std::cin >> score)
    {
        totalScores += score;
        ++numStudents;
    }
    std::cout << "There are " << numStudents << " students, the total scores are " 
    << totalScores << ", and the average is " << totalScores/numStudents << " ." << std::endl;

    return 0;
}