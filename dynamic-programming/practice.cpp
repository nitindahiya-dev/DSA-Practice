// Q: Create Fibonacci sequence

// Recursion Method

// #include <bits/stdc++.h>
// using namespace std;

// int fn(int n, vector<int> &dp){
//     if(n<=1) return 1;

//     if(dp[n] != 1) return dp[n];

//     return dp[n] = fn(n-1,dp) + fn(n-2, dp);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> dp(n + 1, 1);
//     cout << fn(n, dp);
//     return 0;
// }

// Tabular Method

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int prev = 1;
//     int prev2 = 0;

//     for (int i = 2; i < n; i++)
//     {
//         int cur = prev + prev2;
//         prev2 = prev;
//         prev = cur;
//     }
//     cout << prev;
//     return 0;
    
// }

// -------------------------------------------------------------------------------------------------

// Q: You have been given a number Of stairs. Initially. you are at the 0th Stair. and you need to reach the Nth
// stair. Each time you can either climb one step or two steps. You are supposed to return the number of
// distinct ways in which you can climb from the 0th step to Nth step.

// DSA recursion Tips
// 1) Try to represent problems in terms of index
// 2) Do all possible stuffs on that index according to that problem statement
// 3) Sum of all stuff -> if count all the ways
// 4) min( of all stuff ) -> find minimum
// 5) max( of all stuff ) -> find maximum

// #include <bits/stdc++.h>
// using namespace std;

// int climbStairs(int n, vector<int> &dp) {
//     // Base cases
//     if (n == 0) return 1; // 1 way to stay at the ground
//     if (n == 1) return 1; // 1 way to reach the first stair

//     // If already computed, return the stored result
//     if (dp[n] != -1) return dp[n];

//     // Recurrence relation
//     dp[n] = climbStairs(n - 1, dp) + climbStairs(n - 2, dp);

//     return dp[n];
// }

// int main() {
//     int n;
//     cout << "Enter the number of stairs: ";
//     cin >> n;

//     // Create a DP array and initialize with -1
//     vector<int> dp(n + 1, -1);

//     // Compute the number of ways to climb n stairs
//     int result = climbStairs(n, dp);

//     cout << "Number of distinct ways to reach the " << n << "th stair: " << result << endl;

//     return 0;
// }

// -------------------------------------------------------------------------------------------------

// There is a frog on the 1st step of an N stairs long staircase. The frog wants to reach the Nth stair.
// HEIGHT [i] is the height Of the (i+l)th stair-If Frog jumps from ith to jth Stair, the energy lost in the jump
// is given by (HEIGHT[i-Il - HEIGHT [j-l]) .In the Frog is on ith staircase, he can jump either to (i+l)th
// stair or to (i+2)th stair. Your task is to find the minimum total energy used by the frog to reach from 1st
// stair to Nth stair.

// Recursion

// #include <bits/stdc++.h>
// using namespace std;

// int fn(int index, vector<int> &height, vector<int> &dp) {
//     if (index == 0) return 0;

//     if (dp[index] != -1) return dp[index];
//     int one_jump = fn(index - 1, height, dp) + abs(height[index] - height[index - 1]);
//     int second_jump = INT_MAX;
//     if (index > 1) second_jump = fn(index - 2, height, dp) + abs(height[index] - height[index - 2]);
//     return dp[index] = min(one_jump, second_jump);
// }

// int frog_jump(int n, vector<int> &heights) {
//     vector<int> dp(n, -1);
//     return fn(n - 1, heights, dp);
// }

// int main() {
//     int n = 6;  // Example input
//     vector<int> heights = {30, 10, 60, 10, 60, 50};
//     cout << frog_jump(n, heights) << endl;
//     return 0;
// }

// Tabulation
#include<bits/stdc++.h>
using namespace std;

int frog_jump(int n, vector<int> &heights){
    int prev1 = 0;
    int prev2 = 0;
    for (int i = 1; i < n; i++)
    {
        int fs = prev1 + abs(heights[i] - heights[i-1]);
        int ss = INT_MAX;
        if (i > 1) ss = prev2 + abs(heights[i] - heights[i-2]);

        int curr = min(fs,ss);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
    
}


int main() {
    int n = 6;  // Example input
    vector<int> heights = {30, 10, 60, 10, 60, 50};
    cout << frog_jump(n, heights) << endl;
    return 0;
}