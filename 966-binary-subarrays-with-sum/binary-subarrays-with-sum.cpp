class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int count=0;
        int prefixsum=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            if(mp.find(prefixsum-goal)!=mp.end()){
                count+=mp[prefixsum-goal];
            }
               mp[prefixsum]++;
            
        }
        return count;
        
    }
};