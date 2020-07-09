/**
 * @file test.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-09
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-09
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

int main(int argc, char **argv)
{
    int ZeroCnt = 0, OneCnt = 0, TwoCnt = 0, ThreeCnt = 0, FourCnt = 0;

    int input = 0;

    std::cout <<"Please input 0-4 to satistic: " << std::endl;

    while (std::cin >> input)
    {
        /* code */
        switch (input)
        {
        case 0:
            ++ZeroCnt;
        case 1:
            ++OneCnt;
        case 2:
            ++TwoCnt;
        case 3:
            ++ThreeCnt;
        case 4:
            ++FourCnt;
        default:
            break;
        }
    }
    

    return 0;
}