class Solution {
public:
    int reverse(int x) {
        int reverse=0;
        while(x!=0){
            if(reverse>INT_MAX/10 || reverse<INT_MIN/10){   //handle overflow for end conditions
                return 0;
            }
            reverse=reverse*10+x%10;    //multiplication by 10 may lead to overflow from 2^31 bits
            x/=10;
        }
        return reverse;
    }
};
