// Problem Link: https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> res;
        if(nums.empty()){
            return res;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int targ=target-nums[i]-nums[j];
                int left=j+1,right=n-1;
                while(left<right){
                    int sum2=nums[left]+nums[right];
                    if(sum2<targ){
                        left++;
                    }
                    else if(sum2>targ){
                        right--;
                    }
                    else{
                        vector<int> v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[left]);
                        v.push_back(nums[right]);
                        res.push_back(v);
                        while(left<right && nums[left]==v[2]) ++left;
                        while(left<right && nums[right]==v[3]) --right;
                    }
                }
                 while(j + 1 < n && nums[j + 1] == nums[j]) ++j;
            }
             while(i + 1 < n && nums[i + 1] == nums[i]) ++i;
        }
        return res;
    }
};

