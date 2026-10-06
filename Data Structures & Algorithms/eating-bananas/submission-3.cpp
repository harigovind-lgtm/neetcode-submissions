class Solution {
public:
    int bs(vector<int>& piles,int h,int l,int r)
    {
        
        if(l>=r)
        {
            return l;
        }
        int mid=(l+r)/2;
        int hours=0;
        for(int i:piles)
        {
            hours+=ceil((double)i/mid);
        }
        if(hours<=h)
        {
            return bs(piles,h,l,mid);
        }
        else if(hours>h)
        {
            return bs(piles,h,mid+1,r);
        }
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=1000000000;
        return bs(piles,h,l,r);
    }
};
