
#include <iostream>
#include <vector>

using namespace std;

int main()
{       
        vector<int> nums = {1, 2, 3, 1};
        int size = nums.size();
        if(size == 1)
        {
            return 0;
        }
        
        for(int i = 0; i < size; ++i)
        {
            if(i == 0 && nums[0] > nums[1])
            {
                return 0;
            }
            else if(i == size-1 && nums[i] > nums[i-1])
            {
                return i;
            }
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1])
            {
                return i;
            }
        }
        return -1;
    
}