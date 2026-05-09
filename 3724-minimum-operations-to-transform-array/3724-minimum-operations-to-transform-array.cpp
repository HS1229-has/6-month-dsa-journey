class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2) {
//         int n= nums1.size();
//         int m=nums2.size();
//     int target = nums2[m-1];

// int best = nums1[0];
// int minDiff = abs(target - nums1[0]);

// for(int i=1;i<n;i++){

//     int diff = abs(target - nums1[i]);

//     if(diff < minDiff){
//         minDiff = diff;
//         best = nums1[i];
//     }
// }
// nums1.push_back(best);

//     long long count = 1; 
//  n = nums1.size();

//         for(int i = 0; i < n; i++) {

//             count += abs(nums1[i] - nums2[i]);
//         }

//         return count;


               int n = nums1.size();

        int target = nums2[n];

        long long count = 0;

        int extra = INT_MAX;

        for(int i = 0; i < n; i++) {

            count += abs(nums1[i] - nums2[i]);

            // append from nums1[i]
            extra = min(extra,
                        abs(target - nums1[i]) + 1);

            // append after transformation
            extra = min(extra,
                        abs(target - nums2[i]) + 1);

            int low = min(nums1[i], nums2[i]);
            int high = max(nums1[i], nums2[i]);

            // target path me already mil gaya
            if(low <= target && target <= high) {
                extra = 1;
            }
        }

        return count + extra;

    }
};
  