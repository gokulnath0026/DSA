class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mp;
        for(int it:nums){
            mp.insert(it);
        }
        int longest=0;
        for(int it:mp){
            if(mp.find(it-1)==mp.end()){
                int length=1;
                int current=it;
                while(mp.find(current + 1)!=mp.end()){
                    length++;
                    current++;
                }
                longest=max(length,longest);
            }
        }
        return longest;
    }
};