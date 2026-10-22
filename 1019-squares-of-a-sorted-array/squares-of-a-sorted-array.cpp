class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // for(int i=0; i<nums.size(); i++) nums[i] *= nums[i];

        // for(int i=0; i<nums.size(); i++){
        //     for(int j=0; j<nums.size()-i-1; j++){
        //         if (nums[j]>nums[j+1]) swap(nums[j], nums[j+1]);
        //     }
        // }

        vector<int> sol(nums.size());

        int left = 0, right = nums.size()-1;
        int current = nums.size()-1;

        while(left<=right){
            if (abs(nums[left])>=abs(nums[right])){
                sol[current] = nums[left]*nums[left];
                left++;
            }
            else{
                sol[current] = nums[right]*nums[right];
                right--;
            }
            current--;
        }
        return sol;
    }
};