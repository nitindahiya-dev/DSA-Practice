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

#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n, vector<int> &dp) {
    // Base cases
    if (n == 0) return 1; // 1 way to stay at the ground
    if (n == 1) return 1; // 1 way to reach the first stair

    // If already computed, return the stored result
    if (dp[n] != -1) return dp[n];

    // Recurrence relation
    dp[n] = climbStairs(n - 1, dp) + climbStairs(n - 2, dp);

    return dp[n];
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    // Create a DP array and initialize with -1
    vector<int> dp(n + 1, -1);

    // Compute the number of ways to climb n stairs
    int result = climbStairs(n, dp);

    cout << "Number of distinct ways to reach the " << n << "th stair: " << result << endl;

    return 0;
}
