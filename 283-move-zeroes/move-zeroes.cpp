class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> vec;
        int count=0;
        for(int x: nums){
            if (x==0){
                count++;
            }
            else{
                vec.push_back(x);
            }
        }
        while(count){
            vec.push_back(0);
            count--;
        }
        nums = vec;

    }
};