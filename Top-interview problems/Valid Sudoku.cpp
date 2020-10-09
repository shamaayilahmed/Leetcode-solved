static const auto __ =[](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return NULL;
}();
class Solution {
public:
    bool valid(vector<vector <char>>v,int row,int col){
        return rowClear(v,row) && colClear(v,col) && boxClear(v,row-row%3,col-col%3);
    }
    bool rowClear(vector<vector <char>> v,int row){
     set<char> s;
        for(int i=0;i<9;i++){
            if(s.find(v[row][i])!=s.end()){
             return false;
            }
            if(v[row][i]!='.'){
             s.insert(v[row][i]);
            }
        }
        return true;
    }

bool colClear(vector<vector <char>> v,int col){
    set<char> s;
    for(int i=0;i<9;i++){
        if(s.find(v[i][col])!=s.end()){
            return false;
        }
        if(v[i][col]!='.'){
            s.insert(v[i][col]);
        }
    }
    return true;
}

bool boxClear(vector<vector <char>> v,int row,int col){
    set<char> s;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            char now=v[i+row][j+col];
            if(s.find(now)!=s.end()){
            return false;
             }
            if(now!='.'){
                s.insert(now);
            }
        }
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        int i,j;
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                if(!valid(board,i,j))
                    return false;
            } 
        }
        return true;
    }
};
