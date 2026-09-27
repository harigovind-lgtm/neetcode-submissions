class Solution {
public:
    bool isPalindrome(string s) {
        string s_ref="";
        for(char i:s)
        {
            if(isalnum(i))
            {
                s_ref.push_back(tolower(i));
            }
        }
        int r=s_ref.size()-1;
        int l=0;
        while(l<r)
        {
            if(s_ref[l]!=s_ref[r])
            return false;
            l++;
            r--;
        }
        return true;
    }
};
