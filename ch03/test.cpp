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

using namespace std;

int main(int argc, char **argv)
{
    string s1 = "abcdefg";
    string s2 = s1;
    string s3("hijklmn");
    string s4(s3);
    string s5(10, 'j');
    string s6 = string("abc");
    string s7 = string(10, 'k');

    return 0;
}