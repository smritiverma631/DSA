/*
 * DATE: 23/10/2026
 *
 * PROBLEM LINK: https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1
 * PROBLEM STATEMENT: Reverse an array in consecutive groups of size k.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Learned how to reverse an array in groups of k elements.
 * Understood how to swap elements to reverse their order.
 * Learned how to reverse the remaining elements if fewer than k elements are left.
 * __________________________________________________
 *
 */

class Solution {
public:
    void reverseInGroups(vector<int> &arr, int k) {
        int n = arr.size();

        for (int i = 0; i < n; i += k) {
            int left = i;

            int right = min(i + k - 1, n - 1);

            while (left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};
