class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        return false;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        for(char i:s1)
        {
            m1[i]++;
        }
        int l=0;
        int r=s1.size()-1;
        for(int i=0;i<s1.size();i++)
        {
            m2[s2[i]]++;
        }
        while(r<s2.size())
        {
           bool match=true;

            for(char i='a';i<='z';i++)
            {
                if(m1[i]!=m2[i])
                {
                    match=false;
                    break;
                }
            }
            if(match==false)
            {
                m2[s2[l]]--;
                l++;
                r++;
                if(r<s2.size())
                m2[s2[r]]++;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
