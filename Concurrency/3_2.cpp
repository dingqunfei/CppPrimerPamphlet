
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
        string s = "aaaa";
        int size = s.size();

        vector<vector<int>> dp(size, vector<int>(size, 0));
        for(int n = 0; n < size; ++n)
        {
            dp[n][n] = 1;
        }
        int max = 1;
        int left = 0, right = 0;
        for(int i = size - 1; i >= 0; --i)
        {
            for(int j = i+1; j < size; ++j)
            {
                if((s[i] == s[j]) && ((i+1 == j-1) || (dp[i+1][j-1] != 0)))
                {
                    dp[i][j] = dp[i+1][j-1]+2;
                    if(dp[i][j] > max)
                    {
                        max = dp[i][j];
                        left = i;
                        right = j;
                    }
                }
            }
        }
        return 0;
}