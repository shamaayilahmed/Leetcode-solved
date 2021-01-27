/*
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
*/


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string,vector<string>> anagram_map;
        int i;
        for(i=0;i<strs.size();i++){
            string key=strs[i];
            sort(key.begin(),key.end());
            anagram_map[key].push_back(strs[i]);
        }
        for(auto items : anagram_map){
            result.push_back(items.second);
        }
        
        return result;
    }
};
