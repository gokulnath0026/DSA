class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int it:nums){
            mp[it]++;
        }

        for(auto ch:mp){
            if(ch.second!=1){
                return true;
            }
        }
        return false;
    }
};