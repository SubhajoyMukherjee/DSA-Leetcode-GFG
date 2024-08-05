class Solution {
public:
    bool check(vector<int>& nums) {
        int A=nums[0];
        vector<int> dup;
        int count=0;
        for(int i=1;i<nums.size();i++)
        {
            if(A>nums[i])
            {
                A=nums[i];
                for(int j=i;j<nums.size();j++)
                {
                    if(nums[j]>=A && nums[j]<=nums[0])
                    {
                        A=nums[j];
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            else
            {
                A=nums[i];
            }
        }
        return true;
    }
};