// Problem Link : https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                n++;
                nums[j]=nums[i];
                j++;
            }
        }
        return n;
    }
};
