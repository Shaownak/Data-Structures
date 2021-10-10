class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>>col(9, vector<bool>(9,false));
        vector<vector<bool>>box(9, vector<bool>(9, false));
        
        for(int i=0; i<9; i++){
            vector<bool>row(9, false);
            for(int j=0; j<9; j++){
                if(!isdigit(board[i][j])){
                    continue;
                }
                int idx = board[i][j] - '1';
                
                if(row[idx]==true){
                    return false;
                }
                row[idx] = true;
                
                if(col[j][idx]==true){
                    return false;
                }
                col[j][idx] = true;
                
                int boxidx = (i/3)*3+(j/3);
                if(box[boxidx][idx]==true){
                    return false;
                }
                box[boxidx][idx] = true;
            }
        }
        return true;
    }
};
