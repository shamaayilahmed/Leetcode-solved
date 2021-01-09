/*To determine how you "say" a digit string, split it into the minimal number of groups so that each group is a contiguous section all of the same character. Then for each group,
say the number of characters, then say the character. To convert the saying into a digit string, replace the counts with a number and concatenate every saying.

Input: n = 4
Output: "1211"
Explanation:
countAndSay(1) = "1"
countAndSay(2) = say "1" = one 1 = "11"
countAndSay(3) = say "11" = two 1's = "21"
countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"

*/

class Solution {
public:
    string getNext(string seq){
        string next=""; 
        int i=0;
        while(i < seq.size()){
            int count=1;
            while( i < seq.size()-1 && seq[i]==seq[i+1]){
                count++; 
                i++;
            }
            next += to_string(count)+seq[i];
            i++;
        }
        return next;
    }
    
    string countAndSay(int n) {
        string base="1";
        if(n==1){
            return base;
        }
        for(int i=1;i<n;i++){
            base=getNext(base);
        }
        return base;
    }
};
