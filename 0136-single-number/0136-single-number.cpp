class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=1;
        int ans;
        if(nums.size()==1)
        {
            return nums[0];
        }
        while(i<nums.size())
        {
            if(nums[i-1]==nums[i])
            {
                if(i+2>=nums.size())
                {
                    return nums[i+1];
                }
                i+=2;
            }
            else
            {
                //ans=nums[i-1];
                //i++;
                return nums[i-1];
            }
        }
        return ans;
    }
};