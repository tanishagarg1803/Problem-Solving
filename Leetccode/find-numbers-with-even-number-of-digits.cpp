// Problem Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            int x=0;
            while(nums[i]!=0){
                x++;
                nums[i]/=10;
            }
            if(x%2==0){
                c++;
            }
        }
        return c;
    }
};
