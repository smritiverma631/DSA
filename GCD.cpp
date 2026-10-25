/*
 * DATE: 20/10/2026
 *
 * PROBLEM LINK: https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
 * PROBLEM STATEMENT:GCD of two numbers using C++
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * Understood the use of loops and conditional statements in C++
 * Understood the Euclidean algorithm for finding GCD
 * __________________________________________________
 *
 */

class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        while (b != 0) {
             int remainder = a % b;
             a = b;
             b = remainder;
        }
        return a;
    }
};