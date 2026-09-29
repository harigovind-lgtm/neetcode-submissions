class Solution {
public:
    int trap(vector<int>& heights) {
      int l=0;
      int r=2;
      vector<int> leftmax (heights.size(),0);
      vector<int> rightmax (heights.size(),0);
      int lmax=0;
      for(int i=1;i<heights.size();i++)
      {
        lmax=max(lmax,heights[i-1]);
        leftmax[i]=lmax;
      }
      int rmax=0;
      for(int i=heights.size()-2;i>=0;i--)
      {
        rmax=max(rmax,heights[i+1]);
        rightmax[i]=rmax;
      }
      int water=0;
      for(int i=0;i<heights.size();i++)
      {
        int wat=min(rightmax[i],leftmax[i]);
        if(wat>heights[i])
        {
            water+=wat-heights[i];
        }
      }
      return water;
    }
};
