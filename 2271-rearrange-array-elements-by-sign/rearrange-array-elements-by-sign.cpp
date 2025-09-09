class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>pos,neg;

        for(int num:nums){
            if(num>0){
                pos.push_back(num);
            }
            else{
                neg.push_back(num);
            }
        }
            vector<int>result(n);
            int j=0,i=0;
            for(int k=0;k<n;k++){
                if(k % 2 ==0){
                    result[k] = pos[i];
                    i++;
                }
                else{
                    result[k]=neg[j];
                    j++;
                }
            }
            return result;
        
    }
};