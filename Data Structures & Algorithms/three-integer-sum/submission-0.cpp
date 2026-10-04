class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0 && nums[i]==nums[i-1])
            continue;
            int l=i+1;
            int r=nums.size()-1;
            int target=0-nums[i];
            while(l<r)
            {
                
                if(nums[l]+nums[r]<target)
                l++;
                else if(nums[l]+nums[r]>target)
                r--;
                else
                {
                    result.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    while(l<nums.size() && nums[l]==nums[l-1])
                    l++;
                    r--;
                }
                
            }
        }
        return result;
    }
};
