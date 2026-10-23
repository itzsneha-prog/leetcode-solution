class Solution {
public:
    bool search(int i,int j,vector<vector<bool>>&vis,vector<vector<char>>&board,
    int idx,string word){
        if(i<0 || j<0 || idx>=word.size() || i>=board.size() || j>=board[0].size() ||vis[i][j]){
            return false;
        }

        if(board[i][j]==word[idx]){
            vis[i][j]=true;

            if(idx==word.size()-1){
                return true;
            }
            idx++;
            if(search(i+1,j,vis,board,idx,word)){//top;
                return true;
            }
            if(search(i,j+1,vis,board,idx,word)){//right;
                return true;
            }
            if(search(i-1,j,vis,board,idx,word)){//bottom;
                return true;
            }
            if(search(i,j-1,vis,board,idx,word)){//left;
                return true;
            }
            
        }
        vis[i][j]=false;
        return false;
    } 

    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>> vis(board.size(),vector<bool>(board[0].size(),false));

        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(!vis[i][j]){
                    if(search(i,j,vis,board,0,word)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};