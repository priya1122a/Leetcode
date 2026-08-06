class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int expectedsum=n*(n+1)/2;
       int acutalsum=0;
       for(int num:nums){
        acutalsum+=num;
       } 
       return expectedsum-acutalsum;
    }
};