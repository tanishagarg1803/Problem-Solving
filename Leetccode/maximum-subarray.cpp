// Problem Link: https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=nums[0] , sum=nums[0];
            if(nums.size()==1){
                return s;
            }
        for(int i=1;i<nums.size();i++){
            s=max(s+nums[i],nums[i]);
            sum=max(sum,s);
        }
        return sum;
    }
};
