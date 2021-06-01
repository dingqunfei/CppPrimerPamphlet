
#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <unordered_map>

using namespace std;

long f(long x)
{
    long count = 0;
    while(x >= 5)
    {
        count += x/5;
        x = x/5;
    }
    return count;
}

int main()
{   
    int x = 16;
    int count = 0;
    while (x + 1)
    {
        count++;
        x |= (x + 1);
    }
    std::cout << count << std::endl;
    return count;
}