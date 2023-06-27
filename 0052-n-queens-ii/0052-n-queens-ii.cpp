class Solution {
public:
  bool isSafe(int row,int col,vector<string>&board,int n )
    {
        int dupr =row;
        int dupc = col;
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')return 0;
            row--;
            col--;
        }
        row = dupr;
        col= dupc;
        while( col>=0)
        {
            if(board[row][col]=='Q')return 0;
            
            col--;
        }
         row = dupr;
        col= dupc;
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')return 0;
            row++;
            col--;
        }
        return 1;
    }
    void callout(int col,vector<string>&board,vector<vector<string>>&ans,int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return ;
        }
        for(int i=0;i<n;i++)
        {
            if(isSafe(i,col,board,n))
            {
                board[i][col]='Q';
                callout(col+1,board,ans,n);
                board[i][col]='.';
            }
        }

    }
    int totalNQueens(int n) {
           vector<vector<string>>ans;
        vector<string>board;
        string str;
        for(int i =0;i<n;i++)
        {
            str.push_back('.');
        }
        for(int i =0;i<n;i++)
        {
            board.push_back(str);
        }
        callout(0,board,ans,n);
        return ans.size();
    }
};