/*
 * DATE: 21/10/2026
 *
 * PROBLEM LINK: https://www.geeksforgeeks.org/problems/adding-one2529/1
 * PROBLEM STATEMENT:Adding 1 to a number in an array-represented number
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * Learned how to add 1 to a number represented as an array of digits.
*  Understood how to traverse an array from right to left using a for loop.
 * __________________________________________________
 *
 */

class Solution {
public:
    vector<int> addOne(vector<int>& arr) {
        int n = arr.size();
        
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] < 9) {
                arr[i]++;
                return arr; 
            }
            
            arr[i] = 0;
        }

        arr.insert(arr.begin(), 1);
        return arr;
    }
};
