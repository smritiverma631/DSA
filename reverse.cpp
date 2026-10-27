/*
 * DATE: 19/10/2026
 *
 * PROBLEM LINK: https://www.hackerrank.com/challenges/arrays-ds/problem?isFullScreen=true
 * PROBLEM STATEMENT: Reverse an array of integers.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: ( ANY NOTES, IDEAS, NEW TRICKS / THIS WILL HELP IN QUICK REVISION )
 * _____________________________________________
 * Understood the use of vectors to store array elements.
 * Understood the use of reverse() function to reverse the array.
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverse(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
