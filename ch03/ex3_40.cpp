/**
 * @file ex3_40.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-25
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
#include <cstring>
#include <iostream>

int main(int argc, char **argv)
{
    const char cstr1[] = "hello";
    const char cstr2[] = "world";

    int len = strlen(cstr1)+strlen(" ")+strlen(cstr2);
    char cstr3[len+1];
    strcpy(cstr3, cstr1);
    //strcat????
    strcat(cstr3, " ");
    strcat(cstr3, cstr2);
    std::cout << cstr3 << std::endl;

    return 0;
}