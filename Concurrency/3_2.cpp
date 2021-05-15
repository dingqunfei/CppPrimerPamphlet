
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
        long k = 1000000000;
        if(k == 0)
        {
            return 5;
        }
        long lhs = 0;
        long rhs = 5*k;
        int val = -1;
        while(lhs <= rhs)
        {
            size_t mid = (lhs+rhs)/2;
            size_t zero_num = f(mid);
            if(zero_num > k)
            {
                rhs = mid-1;
            }
            else if(zero_num < k)
            {
                lhs = mid+1;
            }
            else
            {
                val = mid;
                break;
            }
        }
        if(val > 0)
        {
            return 5;
        }
        return 0;
    
}