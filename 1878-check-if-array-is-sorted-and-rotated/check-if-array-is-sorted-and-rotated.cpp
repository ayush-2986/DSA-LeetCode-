class Solution {
public:
    bool check(vector<int>& nums) {
        int pivot = 0;
        for(int i=1; i<nums.size(); i++){
            if (pivot){
                if (nums[i]>nums[0]) return false;
            }
            cout << pivot << " ";
            if (nums[i-1]>nums[i]){
                if (nums[i]<=nums[0] && !pivot){
                    pivot = i;
                }
                else return false;
            }
        }
        return true;
    }
};