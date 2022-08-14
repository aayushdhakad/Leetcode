class Solution {
public:
    int rob(vector<int>& nums) {
        
        if(nums.size()==1){
            return nums[0];
        }else if(nums.size()>=2){
            nums[1] = max(nums[0],nums[1]);
        }else if(nums.size()==0){
            return 0;
        }
        for(int i=2;i<nums.size();i++){
            nums[i] = max(nums[i]+nums[i-2],nums[i-1]);
        }

        return nums.back();
    }
};