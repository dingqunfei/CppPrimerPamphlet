
/**
 * @brief 
 */

#include <mutex>
#include <list>
#include <thread>
#include <algorithm>

std::mutex some_mutex;
std::list<int> some_list;

void add_to_list(int new_value)
{
    std::lock_guard<std::mutex> gurad(some_mutex);
    some_list.push_back(new_value);
}

bool list_contains(int value_to_find)
{
    std::lock_guard<std::mutex> guard(some_mutex);
    return std::find(some_list.begin(), some_list.end(), value_to_find) != some_list.end();
}