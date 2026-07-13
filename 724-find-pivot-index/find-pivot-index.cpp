class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int tsum=0;
       for(int ch:nums){
        tsum+=ch;
       }
       int lsum=0;
       for(int i=0;i<nums.size();i++){
        int rsum=tsum-lsum-nums[i];

        if(rsum==lsum){
            return i;
        }
        lsum+=nums[i];
       } 
       return -1;
    }
};