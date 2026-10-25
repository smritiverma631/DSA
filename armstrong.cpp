/*
 * DATE: 20/10/2026
 *
 * PROBLEM LINK:https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1 
 * PROBLEM STATEMENT:Armstrong Number using C++
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */

 class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int hundreds = n / 100;
        int tens = (n / 10) % 10;
        int units = n % 10;
        
        int sumOfCubes = (hundreds * hundreds * hundreds) + 
                         (tens * tens * tens) + 
                         (units * units * units);

        return sumOfCubes == n;
   }
};
