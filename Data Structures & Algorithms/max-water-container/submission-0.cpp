class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int results=0;
        while(l<r)
        {
            int length=min(heights[l],heights[r]);
            int breadth=r-l;
            results=max(length*breadth,results);
            if(heights[l]>heights[r])
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return results;
    }
};
