class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>a;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                a.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i<a.size())
            {
                nums[i]=a[i];

            }
            else
            {
                nums[i]=0;
            }
        }
    }
};