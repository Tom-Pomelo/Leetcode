/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size(), left = (m + n + 1) / 2, right = (m + n + 2) / 2;
        return (findKthElement(nums1, 0, nums2, 0, left) + findKthElement(nums1, 0, nums2, 0, right)) / 2.0;
    }
    int findKthElement(vector<int> &nums1, int i, vector<int> &nums2, int j, int k) {
        if (i >= nums1.size()) {
            return nums2[j + k - 1];
        }
        if (j >= nums2.size()) {
            return nums1[i + k -1];
        }
        if (k == 1) {
            return min(nums1[i], nums2[j]);
        }
        int mid_1 = (i + k/2 - 1 < nums1.size()) ? nums1[i + k/2 - 1] : __INT_MAX__;
        int mid_2 = (j + k/2 - 1 < nums2.size()) ? nums2[j + k/2 - 1] : __INT_MAX__;
        if (mid_1 > mid_2) {
            return findKthElement(nums1, i, nums2, j + k/2, k - k/2);
        } else {
            return findKthElement(nums1, i + k/2, nums2, j, k - k/2);
        }
    }
};

