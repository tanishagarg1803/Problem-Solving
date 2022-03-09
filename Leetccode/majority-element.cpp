// Problem Link: https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int c=0,ele;
        for(int i=0;i<n;i++){
            if(c==0){
                ele=nums[i];
            }
            if(ele==nums[i]){
                c++;
            }
            else{
                c--;
            }
        }
        return ele;
    }
};
