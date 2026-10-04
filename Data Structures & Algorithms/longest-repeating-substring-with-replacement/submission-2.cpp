class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> m;
        int l=0;
        int r=1;
        int result=1;
        m[s[l]]++;
        m[s[r]]++;
        while(r<s.size() && l<s.size() && l<=r)
        {
            int maxcount=0;
            for(char i='A';i<='Z';i++)
            {
            
                maxcount= max(maxcount,m[i]);
                
            }
            if((r-l+1-maxcount)<=k)
            {
                result=max(result,r-l+1);
                r++;
                if(r<s.size())
                {
                    m[s[r]]++;
                }
                
            }
            
            else
            {
                m[s[l]]--;
                l++;
            }
            
        }
        return result;
    }
};
