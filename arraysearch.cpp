/*
 * DATE: 25/10/2026
 *
 * PROBLEM LINK: https://www.geeksforgeeks.org/problems/sum-all-array-elements/1
 * PROBLEM STATEMENT: Sum of all elements in an array.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Learned how to find the sum of all elements in an array.
 * Understood how to use a loop to access each element.
 * Learned to add each element to a variable that stores the total sum.
 * __________________________________________________
 *
 */

class Solution {
  public:
    int arraySum(vector<int>& arr) {
        int sum = 0;
        for (int num : arr) {
            sum += num;
        }
        return sum;
    }
};
