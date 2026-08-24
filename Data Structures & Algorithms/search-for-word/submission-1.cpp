class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows=board.size();
        int cols=board[0].size();
        vector<vector<bool>> visi(rows,vector<bool>(cols,false));

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(backtrack(i,j,0,board,word,visi)) return true;
            }
        }
        return false;
    }

    bool backtrack(int r,int c,int index, vector<vector<char>>& board,string& word,vector<vector<bool>>& visi){
        if(index==word.size()) return true;

        if(r<0 || r>=board.size() || c<0 ||c>=board[0].size()) return false;
        if(board[r][c] != word[index] || visi[r][c]) return false;

        visi[r][c]=true;
        bool found = backtrack(r-1,c,index+1,board,word,visi) || backtrack(r+1,c,index+1,board,word,visi) || backtrack(r,c-1,index+1,board,word,visi) || backtrack(r,c+1,index+1,board,word,visi); 

        visi[r][c]=false;
        return found;
    }
};
