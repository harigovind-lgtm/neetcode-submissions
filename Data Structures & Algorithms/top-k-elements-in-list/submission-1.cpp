class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<vector<int>> coun (nums.size()+1);
        for(int i:nums)
        {
            freq[i]++;
        }
        for(auto&[key,value]:freq)
        {
            coun[value].push_back(key);
        }
        vector<int> result;
        for(int i=nums.size();i>=0;i--)
        {
            for(int j:coun[i])
            {
                result.push_back(j);
                if(result.size()==k)
                return result;
            }
        }
    }
};
