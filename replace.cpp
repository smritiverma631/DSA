/*
 * DATE: 18/10/2026
 *
 * PROBLEM LINK: https://www.geeksforgeeks.org/problems/replace-all-0s-with-5/1
 * PROBLEM STATEMENT:Replace all 0's with 5's in an input integer
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 *  Improved number manipulation and logical thinking skills
 *  Understood how to construct a new number digit by digit
 * __________________________________________________
 *
 */

class Solution {
  public:
    int convertFive(int n) {
        // code here
        if (n == 0) return 5;

        int result = 0;
        int placeValue = 1;

        while (n > 0) {
            int digit = n % 10;

            if (digit == 0) {
                digit = 5;
            }

            result = result + (digit * placeValue);

            n /= 10;
            placeValue *= 10;
        }

        return result;
    }
};
