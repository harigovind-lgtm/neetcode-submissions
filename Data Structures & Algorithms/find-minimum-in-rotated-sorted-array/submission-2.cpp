class Solution {
public:
    int bs(vector<int> &nums,int l,int r)
    {
        int mid=(r+l)/2;
        if(l==r)
        return nums[l];
        if(nums[mid]>nums[r])
        {
            return bs(nums,mid+1,r);
        }
        else
        {
            return bs(nums,l,mid);
        }
    }
    int findMin(vector<int> &nums) {
        int r=nums.size()-1;
        int l=0;
        return bs(nums,l,r);
    }
};
