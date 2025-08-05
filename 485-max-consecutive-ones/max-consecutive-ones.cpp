class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxcount=0;
    int current=0;
    for(int num:nums){
        if(num==1){
            current++;
             maxcount = max(current,maxcount);
        }
        else{
            current =0;
        }
    }
    return maxcount;
    }  
};