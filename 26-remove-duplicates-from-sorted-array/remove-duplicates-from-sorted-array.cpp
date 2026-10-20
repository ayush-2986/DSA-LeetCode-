class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = nums.size();
        if (count<2) return count;

        int k = 1;

        int slow =0;
        int fast = 1;

        while(fast<count){
            if (nums[slow]!=nums[fast]){
                nums[slow+1] = nums[fast];
                slow++;
                k++;
            }
            fast++;
        }
        return k;
    }
};