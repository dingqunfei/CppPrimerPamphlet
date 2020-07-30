/**
 * @file ex7_27.h
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-30
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-30
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
#include <vector>

class Screen{

public:
    typedef std::string::size_type pos;

    Screen() = default;

    Screen(pos h, pos w):
    hight(h), width(w), contents(h * w, ' ')
    {

    }

    Screen(pos h, pos w, char c):
    hight(h), width(w), contents(h * w, c)
    {

    }

    char get() const
    {
        return contents[cursor];
    }

    char get(pos h, pos w) const
    {
        return contents[h * w];
    }

private:
    pos cursor;
    pos hight;
    pos width;
    std::string contents;

};