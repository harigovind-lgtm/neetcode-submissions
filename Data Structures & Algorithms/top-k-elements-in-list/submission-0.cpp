class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i:nums)
        {
            m[i]++;
        }
        vector<vector<int>> freq;
        for(auto &[key,value]:m)
        {
            freq.push_back({value,key});
        }
        sort(freq.begin(),freq.end());
        int counter=0;
        vector<int> result;
        for(int i=freq.size()-1;i>=0;i--)
        {
            if(counter==k)
            break;
            result.push_back(freq[i][1]);
            counter++;
        }
        return result;
    }
};
