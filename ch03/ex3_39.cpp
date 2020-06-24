/**
 * @file ex3_39.cpp
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

int compString(std::string str1, std::string str2)
{
    if (str1 > str2)
    {
        /* code */
        return 1;
    }
    else if (str1 < str2)
    {
        /* code */
        return -1;
    }
    else
    {
        /* code */
        return 0;
    }
    
    
    
}

int compCString(const char *cstr1, const char *cstr2)
{
    while ((*cstr1 != '\0') && (*cstr2 != '\0'))
    {
        /* code */
        if (*cstr1 > *cstr2)
        {
            /* code */
            return 1;
        }
        else if(*cstr1 < *cstr2)
        {
            /* code */
            return -1;
        }
        else
        {
            /* code */
            ++cstr1;
            ++cstr2;
        }
    }
    if ((*cstr1 == 0) && (*cstr2 == 0))
    {
        /* code */
        return 0;
    }
    else if(*cstr1 == 0)
    {
        /* code */
        return -1;
    }
    else
    {
        /* code */
        return 1;
    }
    
}

int main(int argc, char **argv)
{
    std::string str1 = "abacadae", str2 = "aaabacadae";

    if (compString(str1, str2) > 0)
    {
        /* code */
        std::cout << str1 << std::endl;
    }
    else
    {
        /* code */
        std::cout << str2 << std::endl;
    }
    
    

    const char cstr1[] = {'c', 'a', 'a', 'a', 'g', 'k', '\0'};
    const char cstr2[] = {'c', 'a', 'a', 'a', 's', 'k', '\0'};

    if (compCString(cstr1, cstr2) > 0)
    {
        /* code */
        std::cout << cstr1 << std::endl;
    }
    else
    {
        /* code */
        std::cout << cstr2 << std::endl;
    }

    return 0;
}