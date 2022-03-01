// Problem Link: https://leetcode.com/contest/weekly-contest-282/problems/counting-words-with-a-given-prefix/

class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        count=0
        for i in words:
            if(i.startswith(pref)):
                count=count+1
        return count
