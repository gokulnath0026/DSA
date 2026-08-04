class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        int left=0;
        unordered_map<char,int>mp;
        for(int right=0;right<s.size();right++){
            mp[s[right]]++;
            while(mp[s[right]]>1){
                mp[s[left]]--;
                left++;
            }
            count=max(count,right-left+1);
        }
        return count;

    }
};