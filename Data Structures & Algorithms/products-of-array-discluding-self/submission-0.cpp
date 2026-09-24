class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre;
        vector<int> post(nums.size(),0);
        double mul=1;
        for(int i:nums)
        {
            pre.push_back(mul);
            mul*=i;
            
        }
        mul=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            post[i]=mul;
            mul*=nums[i];
        }
        vector<int> results;
        for(int i=0;i<nums.size();i++)
        {
            results.push_back(pre[i]*post[i]);
        }
        return results;
    }
};
