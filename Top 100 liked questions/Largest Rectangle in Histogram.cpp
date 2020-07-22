/*Given n non-negative integers representing the histogram's bar height where the width of each bar is 1, find the area of largest rectangle in the histogram.

a histogram where width of each bar is 1, given height = [2,1,5,6,2,3].

The largest rectangle is which has area = 10 unit.

Example:

Input: [2,1,5,6,2,3]
Output: 10
*/


static const auto __ =[]()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return NULL;
}();

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> Stack;
        int maxArea=0,area=0,top,i=0;
        while(i<heights.size()){
            if(Stack.empty() || heights[Stack.top()] <= heights[i])
                Stack.push(i++);
            else{
                top=Stack.top();
                Stack.pop();
                area=heights[top]*(Stack.empty() ? i : i-Stack.top()-1);
                maxArea=max(area,maxArea);
            }
        }
        while(!Stack.empty()){
                top=Stack.top();
                Stack.pop();
                area=heights[top]*(Stack.empty() ? i : i-Stack.top()-1);
                maxArea=max(area,maxArea);
        }
        return maxArea;
    }
};
