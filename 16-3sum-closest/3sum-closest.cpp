class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest=nums[0]+nums[1]+nums[2];
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                int sum=nums[left]+nums[i]+nums[right];
                if(abs(target-sum)<abs(target-closest)){
                    closest=sum;
                }
            
                if(target== sum){
                    return sum;
                }
                else if(target<sum){
                    right--;
                }   
                else{
                    left++;
                }
            }
            
            
            
        }
        return closest;
    }
};