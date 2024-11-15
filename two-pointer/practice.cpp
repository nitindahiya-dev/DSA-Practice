// maximum points you can obtain from cards?

// arr = [7,6,7,1,8,7,1,4]       k = 4

// #include <bits/stdc++.h>
// using namespace std;

// int fn(vector<int> arr, int k) {
//     int lsum = 0;  // sum of the left (front) part
//     int rsum = 0;  // sum of the right (end) part
//     int msum = 0;  // maximum sum

//     // Calculate initial sum by taking the first `k` elements from the left
//     for (int i = 0; i < k; i++) {
//         lsum += arr[i];
//     }
//     msum = lsum;

//     // Start from the k-th card (left sum) and move one card at a time to the right side
//     int rindex = arr.size() - 1;

//     for (int i = k - 1; i >= 0; i--) {
//         lsum = lsum - arr[i];     // Remove the last card from the left part
//         rsum = rsum + arr[rindex]; // Add a card from the right end
//         rindex--;            // Move right index towards the left

//         msum = max(msum, lsum + rsum); // Update max sum if the current sum is greater
//     }

//     return msum;
// }

// int main() {
//     vector<int> arr = {7, 6, 7, 1, 8, 7, 1, 4};
//     int k = 4;  // Number of cards to pick

//     int ans = fn(arr, k);

//     cout << "Maximum points: " << ans << endl;
//     return 0;
// }


// ------------------------------------------------------------------------------------------------

//  Longest Substring Without Repeating Characters

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int maxlen = 0;
    int l = 0, r = 0;
    int arr[255];
    memset(arr, -1, sizeof(arr));
    while (r < n) {
        if (arr[s[r]] != -1 && arr[s[r]] >= l) {
            l = arr[s[r]] + 1;
        }
        arr[s[r]] = r;
        maxlen = max(maxlen, r - l + 1);
        r++;
    }
    return maxlen;
}

int main() {
    string s = "afsdwrsd";  // Input string
    int result = lengthOfLongestSubstring(s);
    cout << "Length of the longest substring without repeating characters: " << result << endl;
    return 0;
}
