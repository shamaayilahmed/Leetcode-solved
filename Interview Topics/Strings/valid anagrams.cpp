class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        int char1[256]={0};
        int char2[256]={0};
        int i;
        for(i=0;s[i]&&t[i];i++){
            char1[s[i]]++;
            char2[t[i]]++;
        }
        for(int j=0;j<256;j++){
            if(char1[j]!=char2[j])
                return false;
        }
        return true;
    }
};
