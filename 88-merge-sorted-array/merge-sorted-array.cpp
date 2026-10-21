class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for (int i=0; i<n; i++){
            nums1[i+m] = nums2[i];
        }
        int low = 0, high = m+n-1;
        
        // for(int i=1; i<m+n; i++){
        //     for(int j=0; j<m+n; j++){
        //         if (nums1[i]<nums1[j]) swap(nums1[j], nums1[i]);
        //     }
        // }

        for (int i=0; i<m+n; i++){
            for(int j=0; j<m+n-i-1; j++){
                if (nums1[j]>nums1[j+1]) swap(nums1[j],nums1[j+1]);
            }
        }
    }
};