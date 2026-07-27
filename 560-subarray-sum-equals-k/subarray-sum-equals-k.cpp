class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int prefixsum=0;
        mp[0]=1;
        int count=0;

        for(auto it:nums){
            prefixsum+=it;
            if(mp.find(prefixsum-k)!=mp.end()){
                count+=mp[prefixsum-k];
            }
            mp[prefixsum]++;
        }
        return count;
    }
};