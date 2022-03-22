// Problem Link: https://leetcode.com/problems/majority-element-ii/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int c1=0,c2=0;
        int n1=-1,n2=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==n1){
                c1++;
            }
            else if(nums[i]==n2){
                c2++;
            }
            else if(c1==0){
                n1=nums[i];
                c1=1;
            }
            else if(c2==0){
                n2=nums[i];
                c2=1;
            }
            else{
                c1--;c2--;
            }
        }
        c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==n1){
                c1++;
            }
            else if(nums[i]==n2){
                c2++;
            }
        }
        if(c1>n/3){
                ans.push_back(n1);
            }
        if(c2>n/3){
            ans.push_back(n2);
        }
        return ans;
    }
};