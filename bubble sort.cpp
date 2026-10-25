/*
 * DATE: 21/10/2026
 *
 * PROBLEM LINK: https://www.geeksforgeeks.org/problems/bubble-sort/1
 * PROBLEM STATEMENT:Bubble Sort using C++
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 *  Understood the use of nested for loopes and if conditions in C++
 * _Understood the concept of swapping elements in an array
 * _Understood the use of a swappes flag to optimize sorting_________________________________________________
 *
 */

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            bool swapped = false;

            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }

            if (!swapped) {
                break;
            }
        }
    }    
};
     