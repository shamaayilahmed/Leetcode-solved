static const auto _ =[](){
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     return NULL;
}();
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     int i,j;
        for(i=0;i<matrix.size();i++){
            for(j=i+1;j<matrix.size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};
