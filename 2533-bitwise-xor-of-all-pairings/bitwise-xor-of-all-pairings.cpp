class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int result = 0;

        // XOR all elements of nums2 if nums1 size is odd
        if (nums1.size() % 2 != 0) {
            for (int num : nums2) {
                result ^= num;
            }
        }

        // XOR all elements of nums1 if nums2 size is odd
        if (nums2.size() % 2 != 0) {
            for (int num : nums1) {
                result ^= num;
            }
        }

        return result;
    }
};
