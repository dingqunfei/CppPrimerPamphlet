/**
 * @file ex5_9.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-10
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-10
 * Version     : 1.0
 * Author      : dqflying
 * Lisence     : 
 * Description : 
 * 
 * 
 * 
 * 
 */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    std::string word;
    std::cout << "Please input your words: " << std::endl;
    while (std::cin >> word)
    {
        /* code */
        for(auto ch: word)
        {
            switch (ch)
            {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                ++oCnt;
                break;
            case 'u':
                ++uCnt;
                break;
            default:
                break;
            }
        }
    }
    

    return 0;
}