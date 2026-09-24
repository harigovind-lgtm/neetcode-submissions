class Solution {
public:
    int boxnum(int i, int j) {
    return (i / 3) * 3 + (j / 3);
}
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> vertical (9,vector<int> (9,0));
        vector<vector<int>> horizontal (9,vector<int> (9,0));
        vector<vector<int>> box (9,vector<int>(9,0));
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                int a= board[i][j]-'0';
                if(vertical[i][a-1]==1)
                return false;
                vertical[i][a-1]=1;
                if(horizontal[j][a-1]==1)
                return false;
                horizontal[j][a-1]=1;
                int bo=boxnum(i,j);
                if(box[bo][a-1]==1)
                return false;
                box[bo][a-1]=1;
                }
            }
        }
        return true;
    }
};
