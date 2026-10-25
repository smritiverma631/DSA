/*
 * DATE: 19/10/2026
 *
 * PROBLEM LINK: https://www.geeksforgeeks.org/problems/prime-number2314/1
 * PROBLEM STATEMENT:Prime number
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * Learned how to check if a number is prime or not
 * Understood the use of if conditions and loops in C++
 * __________________________________________________
 *
 */

class Solution {
  public:
    bool isPrime(int n) {
        // code here
         if (n <= 1) {
                    return false;
         }

         for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        
        return true;
    }
};
