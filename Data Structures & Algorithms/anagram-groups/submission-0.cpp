class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> dic;
        for(string str:strs)
        {
            string temp=str;
            sort(temp.begin(),temp.end());
            dic[temp].push_back(str);
        }
        vector<vector<string>> result;
        for (auto& [_, values] : dic) 
            result.push_back(values);
        return result;
    }
};
