class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        int index = 1;
        vector<int> result(len, 0);
        result[0] = nums[0];

        for(int i=1; i<len; i++){
            if (result[index-1] != nums[i]){
                result[index] = nums[i];
                index++;
            }
        }
        nums = result;
        return index;
    }
};