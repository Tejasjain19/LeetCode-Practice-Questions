class Solution {
public:
   
    bool search(vector<vector<char>>& board, string &word , int i , int j , int m , int n , int index )
    {
        if(index == word.size())
            return true;
        
        if(i<0 || j<0 || i>=m || j>=n || board[i][j]!=word[index])
            return false;
        
        char c = board[i][j];
        board[i][j]='#';   // we cannot visit the cell again 
        
        bool op1 = search(board , word , i+1 , j , m , n , index+1);
       
         bool op2 = search(board , word , i-1 , j , m , n , index+1);
        
         bool op3 = search(board , word , i , j-1 , m , n , index+1);
        
         bool op4 = search(board , word , i , j+1 , m , n , index+1);
    
        board[i][j]=c; // replacing the original word 
        
        return op1 || op2 || op3 || op4;
    }
    

    bool exist(vector<vector<char>>& board, string word) {
    
        int m = board.size();
        
        int n = board[0].size();
        
        // for first word
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(board[i][j]==word[0])
                {
                if(search(board,word,i,j,m,n,0))
                     return true;  
                }
            }
        }
        
        
        
        return false;
        
        
        
    }
};