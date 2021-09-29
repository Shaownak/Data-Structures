class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        if((m*n)!=(r*c)){
            return mat;
        }
        
        vector<vector<int>> v (r, vector<int>(c));
        
        int rows=0, col=0;
        
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                v[i][j] = mat[rows][col];
                
                if(col == n-1){
                    col = 0;
                    rows++;
                }
                else col++;
            }
        }
        return v;
    }
};