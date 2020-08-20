/**
 * @file StrBlob.h
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

#include <string>
#include <vector>
#include <initializer_list>
#include <memory>

class StrBlob{

public:

    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string> lst);
    size_type size() const { return data->size();};
    bool empty() const { return data->empty();}

    void push_back(const std::string &str) { data->push_back(str);}
    void pop_back();
    std::string &back();
    std::string &front();

private:

    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg);

};