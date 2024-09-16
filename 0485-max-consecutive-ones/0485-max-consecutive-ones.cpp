class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else if(ans<count && nums[i]==0)
            {
                ans=count;
                count=0;
            }
            else
            {
                count=0;
            }
        }
        return ans=(ans>count)?ans:count;
    }
};