class Solution {
public:
    bool checker(unordered_map<char,int> &m1,unordered_map<char,int> &m2)
    {
        for(char i='A';i<='Z';i++)
        {
            if(m2[i]>m1[i])
            return false;
        }
        for(char i='a';i<='z';i++)
        {
            if(m2[i]>m1[i])
            return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        if(t=="")
        return "";
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(char i:t)
        {
            m2[i]++;
        }
        int l=0;
        int r=0;
        int len=INT_MAX;
        int bestL=0;
        while(l<=r && r<s.size())
        {
            m1[s[r]]++;
            if(checker(m1,m2))
            {
                if(r-l+1<len)
                {
                    bestL=l;
                    len=r-l+1;
                }
                m1[s[l]]--;
                l++;
                m1[s[r]]--;
            }
            else
            {
                r++;
            }
        }
        string ans=len==INT_MAX?"":s.substr(bestL,len);
        return ans;
    }
};
