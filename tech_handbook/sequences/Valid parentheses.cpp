/*
Push all opening symbol to stack
If any closing symbol is detected look that stack is not empty and top of stack contradicts and pop the stack

Repeat until the length of input and return true if stack is empty

If any of the repeating task is not met return false
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int i=0;
        while(i<s.length()){
           if(s[i] == '(' || s[i] == '{' || s[i] == '['){
               stack.push(s[i]);
           }
            
            else if(s[i] == ')' &&!stack.empty() && stack.top()=='('){
                stack.pop();
            }else if(s[i] == '}' &&!stack.empty() && stack.top()=='{'){
                stack.pop();
            }else if(s[i] == ']' &&!stack.empty() && stack.top()=='['){
                stack.pop();
            }
            
            else{
                return false;
            }
            i++;
        }
        return stack.empty();
    }
};
