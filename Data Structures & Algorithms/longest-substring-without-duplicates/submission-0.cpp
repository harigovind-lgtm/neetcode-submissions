class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char,int> m;
        int l=0;
        int r=0;
        int result=0;
        int temp=0;
        while(r<s.size() && l<=r)
        {
            
            while(r<s.size() && m[s[r]]==0)
            {
                temp++;
                m[s[r]]++;
                r++;
            }
            result=max(result,temp);
            m[s[l]]--;
            l++;
            temp--;
        }
        return result;
    }
};
