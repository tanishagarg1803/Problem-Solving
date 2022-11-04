// Problem Link: https://leetcode.com/problems/check-if-the-sentence-is-pangram/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.length();
        if(sentence=="" || n<26){
            return false;
        }
        vector<int> freq(26);                      //create a frequency vector 
        for(auto ch:sentence) freq[ch-'a']++;      //update count of each character
        for(auto it:freq){                         //traverse freq vector
            if(it==0) return false;                //if any aplhabet's occurence is 0
        }                                          //return false;
        return true;
    }
};
