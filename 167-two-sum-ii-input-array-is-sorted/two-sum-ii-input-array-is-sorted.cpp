class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        for(int i=0; i<numbers.size(); i++){
            int low = i, high = numbers.size()-1;
            while(low<=high){
                int mid = (low+high)/2;
                if (numbers[mid] == target-numbers[i]){
                    if (i!=mid) return {i+1, mid+1};
                    else return {i+1, mid+2};
                }
                else if (numbers[mid] > target-numbers[i]){
                    high = mid-1;

                }
                else{
                    low = mid+1;
                }
            }
        }
        
        return {0,0};
    }
};