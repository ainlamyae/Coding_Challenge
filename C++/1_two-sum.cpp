class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> output(2,-1);
        for (int i=0; i<nums.size();i++)
        {
            for (int j=0; j<nums.size(); j++)
            {
                if (nums[i]+nums[j]==target && i!=j)
                {
                    output[0]=i;
                    output[1]=j;
                    break;
                }
            }
        }
        return output;
    }
};
