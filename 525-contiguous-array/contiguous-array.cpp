class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      unordered_map<int,int>mp;
      int length=0;
      int prefix=0;
      mp[0]=-1;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            prefix+=1;
        }
        else{
            prefix+=-1;
        }
        if(mp.find(prefix)!=mp.end()){
            int len=i-mp[prefix];
            length=max(length,len);
        }
        else{
            mp[prefix]=i;
        }
      }
      return length;  
    }
};