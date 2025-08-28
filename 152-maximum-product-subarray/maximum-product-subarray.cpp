class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxpro=nums[0];
        int currentmin=nums[0];
        int currentmax=nums[0];

        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(currentmax,currentmin);
            }
                currentmax=max(nums[i],currentmax*nums[i]);
                currentmin=min(nums[i],currentmin*nums[i]);

                maxpro=max(maxpro,currentmax);
            }
        
        return maxpro;
    }
};