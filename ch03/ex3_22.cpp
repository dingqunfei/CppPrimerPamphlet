/**
 * @file ex3_22.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-22
 * 
 * @copyright Copyright (c) 2020 DQFLYING.INC
 * 
 * @par:
 * 
 * 
 * Date              Version        Author         LISENCE
 * 2020-06-03        1.0            dqflying       XXXXXXX
 * Description:
 * 
 * 
 * 
 */

#include <string>
#include <vector>
#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    std::string temp;
    std::vector<std::string> wordVec;
    std::cout << "Please input words or blankspace or ending with CTRL+D" << std::endl;
    while (std::cin >> temp)
    {
        /* code */
        wordVec.push_back(temp);
    }

    for (auto beg = wordVec.begin(); beg != wordVec.end() && !(*beg).empty(); ++beg)
    {
        /* code */
        for (auto &letter: *beg)
        {
            /* code */
            letter = toupper(letter);
        }
        std::cout << *beg << " ";
        
    }
    
    

    return 0;
}