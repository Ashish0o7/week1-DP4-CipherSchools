class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
         int r=0,c=0;
        int row=mat.size()-1;
        int col=mat[0].size()-1;
        vector<int> ans;
        while(row>=r|| col>=c)
        {
            for(int i=c;i<=col && row>=r;i++)
            {
                ans.push_back(mat[r][i]);
            }
             r++;
            for(int i=r;i<=row && col>=c;i++)
            {
                ans.push_back(mat[i][col]);
            } 
            col--;
            
            for(int i=col;i>=c && row>=r;i--)
            {
                ans.push_back(mat[row][i]);
            } 
            row--;
            
            for(int i=row;i>=r && col>=c;i--)
            {
                ans.push_back(mat[i][c]);
            }
             c++;
            
        }
        
        return ans; 
    }
};