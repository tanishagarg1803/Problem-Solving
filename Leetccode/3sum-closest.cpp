// Problem Link: https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=999999;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int t1=i+1,t2=n-1,sum;
            while(t1<t2){
                sum=nums[i]+nums[t1]+nums[t2];
                if(sum==target){
                    return sum;
                }
                if((abs(target-sum))<(abs(target-ans))){
                    ans=sum;
                }
                if(sum>target){
                    t2--;
                }
                else{
                    t1++;
                }
            }
        }
        return ans;
    }
};
