class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        // for(int i=0; i<len; i++){
        //     for(int j=i; j<len; j++){
        //         if(nums[i]+nums[j]==target) return {(*nums)[i],(*nums)[j]};
        //     }
        // }
        // int arr[2];
        for(int i=0; i<len; i++){
            for(int j=i+1; j<len; j++){
                if (nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {0,0};
    }
};