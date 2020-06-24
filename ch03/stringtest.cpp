/**
 * @file test.cpp
 * @brief 
 * @author dqflying (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-06-03
 * 
 * @copyright Copyright (c) 2020  DQFLYING.INC
 * 
 * @par 新增文件:
 * 
 * 
 * Date              Version        Author         LISENCE
 * 2020-06-03        1.0            dqflying       XXXXXXX
 * Description:
 * 
 * 
 */

#include <string>
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{
    char cstr[] = {'a', 'b', 'c', 'd', '\0'};
    std::cout << strlen(cstr) << std::endl;

    std::string forstr("Hello world!!!");
    for(auto &letter: forstr)
    {
        letter = toupper(letter);
        
    }
    std::cout << forstr << std::endl;

    //初始化
    string s1 = "abcdefg";
    string s2 = s1;
    string s3("hijklmn");
    string s4(s3);
    string s5(10, 'j');
    string s6 = string("abc");
    string s7 = string(10, 'k');

    //getline 函数
    string input;
    while(getline(cin, input))
    {
        if(input.size())
        {
            cout << input << endl;
        }
        
    }


    //io
    string s8, s9;
    cin >> s8 >> s9;
    cout << s8 << s9 << endl;

    return 0;
}