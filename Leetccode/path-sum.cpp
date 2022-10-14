// Problem Link: https://leetcode.com/problems/path-sum/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return false;
        }
        int c=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                c++;
            }
        }
        if(c>=3){
            return true;
        }
        return false;
    }
};
