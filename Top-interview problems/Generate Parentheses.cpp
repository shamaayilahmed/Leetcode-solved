/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
*/

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        backTrack(answer,"",0,0,n);
        
        return answer;
    }
    
    void backTrack(vector<string> &answer,string current,int open,int close,int size){
        if(current.length()==size*2){
            answer.push_back(current);
            return;
        }
        
        if(open<size){
            backTrack(answer,current+"(",open+1,close,size);
        }
        
        if(close<open){
            backTrack(answer,current+")",open,close+1,size);   
        }
    }
};
