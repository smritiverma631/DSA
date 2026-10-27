/*
 * DATE: 22/10/2026
 *
 * PROBLEM LINK: https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
 * PROBLEM STATEMENT: Rotate an array one by one in clockwise direction
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Learned how to rotate an array by one position in the clockwise direction.
 * Learned how to traverse an array backwards using a loop.
 * Improved understanding of array indexing and element shifting.
 * __________________________________________________
 *
 */

class Solution {
  public:
    void rotate(vector<int> &arr) {
        if (arr.size() <= 1) return;

        int last_element = arr.back();

        for (int i = arr.size() - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = last_element;
    }
};
