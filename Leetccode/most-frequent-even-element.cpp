// Problem Link: https://leetcode.com/problems/most-frequent-even-element/

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int c=0,n=-1,x=0;
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                m[nums[i]]++;
            }
        }
        if(m.size()==0){
            return -1;
        }
        for(auto i:m){
            if(x<i.second){
                x=i.second;
                n=i.first;
            }
        }
        return n;
    }
};
