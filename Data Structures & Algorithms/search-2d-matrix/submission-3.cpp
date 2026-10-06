class Solution {
public:
    int rowFinder(vector<vector<int>>& matrix, int target,int l,int r)
    {
        if(r<l)
        {
            return r;
        }
        int mid=(l+r)/2;
        if(matrix[mid][0]<target)
        {
            return rowFinder(matrix,target,mid+1,r);
        }
        else if(matrix[mid][0]>target)
        {
            return rowFinder(matrix,target,l,mid-1);
        }
        else
        return mid;
    }
    bool bs (vector<vector<int>>& matrix, int target,int l,int r,int row)
    {
        if(l>r)
        return false;
        int mid=(l+r)/2;
        if(matrix[row][mid]>target)
        {
            return bs(matrix,target,l,mid-1,row);
        }
        if(matrix[row][mid]<target)
        {
            return bs(matrix,target,mid+1,r,row);
        }
        else
        {
            return true;
        }
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=rowFinder(matrix,target,0,matrix.size()-1);
        if(row==-1)
        return false;
        return bs(matrix,target,0,matrix[0].size()-1,row);
    }
};
