/**
 * @file StrBlob.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-08-20
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-08-20
 * Version     : 1.0
 * Author      : dqflying
 * Lisence     : 
 * Description : 
 * 
 * 
 * 
 * 
 */

#include "StrBlob.h"
#include <exception>

StrBlob::StrBlob():
    data(std::make_shared<std::vector<std::string>>())
{

}

StrBlob::StrBlob(std::initializer_list<std::string> lst):
    data(std::make_shared<std::vector<std::string>>(lst))
{

}

void StrBlob::check(size_type i, const std::string &msg)
{
    if (i > data->size() || i < 0)
    {
        /* code */
        throw std::out_of_range(msg);
    }
    
}

std::string &StrBlob::front()
{
    check(0, "front on empty StrBlob!");
    return data->front();
}

std::string &StrBlob::back()
{
    check(0, "back on empty StrBlob!");
    return data->back();
}

const std::string &StrBlob::front() const
{
    return front();
}

const std::string &StrBlob::back() const
{
    return back();
}

void StrBlob::pop_back()
{
    check(0, "pop back on empty StrBlob!");
    data->pop_back();
}