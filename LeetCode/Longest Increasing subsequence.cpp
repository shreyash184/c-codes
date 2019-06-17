class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       if(nums.size()==0){
           return 0;
       }else{
            int LIS[nums.size()];
            LIS[0]=1;
            for(int i=0;i<nums.size();i++){
                LIS[i]=1;
                for(int j=0;j<i;j++){
                    if(nums[i]>nums[j] && LIS[i] < LIS[j]+1 ){
                        LIS[i] = LIS[j]+1;
                    }
                }
            }
            return *max_element(LIS, LIS+nums.size());
       }
    }
};