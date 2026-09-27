class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> m;
        int result=0;
        for(int i:nums)
        {
            if(m[i]!=1)
            {
                m[i]=1;
            }
        }
        for(int i:nums)
        {
            if(m[i-1]==1)
            continue;
            int count=1;
            int x=i+1;
            while(m[x]==1)
            {
                count++;
                x++;
            }
            result=max(result,count);
        }
        
        return result;
        

    }
};
