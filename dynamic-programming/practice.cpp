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
// #include<bits/stdc++.h>
// using namespace std;

// int frog_jump(int n, vector<int> &heights){
//     int prev1 = 0;
//     int prev2 = 0;
//     for (int i = 1; i < n; i++)
//     {
//         int fs = prev1 + abs(heights[i] - heights[i-1]);
//         int ss = INT_MAX;
//         if (i > 1) ss = prev2 + abs(heights[i] - heights[i-2]);

//         int curr = min(fs,ss);
//         prev2 = prev1;
//         prev1 = curr;
//     }
//     return prev1;
//}

// int main() {
//     int n = 6;  // Example input
//     vector<int> heights = {30, 10, 60, 10, 60, 50};
//     cout << frog_jump(n, heights) << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------------

// for if frog can jump kth jumps

// #include <bits/stdc++.h>
// using namespace std;

// int helper(int n, int k, vector<int> &heights) {
// 	if(n == 0) return 0;

// 	int minSteps = INT_MAX;

// 	for(int j=1; j<=k; j++) {
// 		int l = INT_MAX;
// 		if(n-j >= 0)
// 			l = helper(n-j, k, heights) + abs(heights[n] - heights[n-j]);
// 		minSteps = min(minSteps, l);
// 	}

// 	return minSteps;
// }

// int frogKJump(int n, int k, vector<int> &heights) {
// 	return helper(n-1, k, heights);
// }

// int main(){
// 	vector<int> heights;
// 	heights = {10, 20, 30, 10};
// 	cout << frogKJump(4, 2, heights);
// 	cout << endl;
// 	heights = {10, 50, 10};
// 	cout << frogKJump(3, 2, heights);
// }

// -----------------------------------------------------------------------------------------------

// Maximum Sum of Non-Adjacent Elements

// recursion

// #include <bits/stdc++.h>
// using namespace std;

// int f(int index, vector<int> &num, vector<int> &dp){
//     if(index == 0) return num[index];
//     if(index < 0) return 0;

//     if(dp[index] != -1) return dp[index];

//     int pick = num[index] + f(index - 2, num, dp);
//     int non_pick = 0 + f(index - 1, num, dp);

//     return dp[index] = max(pick, non_pick);
// }

// int max_non_adj(vector<int> &num){
//     int n = num.size();
//     vector<int> dp(n, -1);
//     return f(n-1, num, dp);
// }

// int main(){
//     vector<int> num = {3, 2, 5, 10, 7};
//     cout << max_non_adj(num) << endl;  // Output: 15
//     return 0;
// }

// // tabulation approach
// #include <bits/stdc++.h>
// using namespace std;

// int max_non_adj(vector<int> &num) {
//     int n = num.size();
//     if (n == 0) return 0;         // Edge case: empty list
//     if (n == 1) return num[0];    // Edge case: single element

//     int num_1 = num[0];
//     int num_2 = 0;

//     for(int i = 1; i < n; ++i) {
//         int take = num[i];
//         if(i > 1) take += num_2;

//         int not_take = 0 + num_1;

//         int curr = max(take, not_take);
//         num_2 = num_1;
//         num_1 = curr;  // Correctly update num_1 to curr
//     }

//     return num_1;
// }

// int main() {
//     vector<int> num = {3, 2, 5, 10, 7};
//     cout << max_non_adj(num) << endl;  // Output: 15
//     return 0;
// }

// --------------------------------------------------------------------------------------------------

// House Robber 2
// #include <bits/stdc++.h>
// using namespace std;

// int adj_sum(vector<int> &nums) {
//     int n = nums.size();
//     if (n == 0) return 0;
//     if (n == 1) return nums[0];

//     int prev1 = nums[0];
//     int prev2 = 0;

//     for (int i = 1; i < n; i++) { // Start from 1 to avoid double counting nums[0]
//         int take = nums[i];
//         if (i > 1) take += prev2;

//         int notTake = 0 + prev1;
//         int curr = max(take, notTake);

//         prev2 = prev1;
//         prev1 = curr;
//     }
//     return prev1;
// }

// int house_robber(vector<int> &valueinhouse) {
//     if (valueinhouse.size() == 1) return valueinhouse[0];

//     vector<int> temp1, temp2;
//     for (int i = 0; i < valueinhouse.size(); i++) {
//         if (i != 0) temp1.push_back(valueinhouse[i]);
//         if (i != valueinhouse.size() - 1) temp2.push_back(valueinhouse[i]);
//     }

//     return max(adj_sum(temp1), adj_sum(temp2));
// }

// int main() {
//     vector<int> valueinhouse = {2, 3, 2};
//     cout << house_robber(valueinhouse) << endl; // Output should be 3

//     valueinhouse = {1, 2, 3, 1};
//     cout << house_robber(valueinhouse) << endl; // Output should be 4

//     valueinhouse = {1, 2, 3};
//     cout << house_robber(valueinhouse) << endl; // Output should be 3

//     return 0;
// }

// -----------------------------------------------------------------------------------------------

// Ninja's Training [2D Concept]

// recursion

// #include <bits/stdc++.h>
// using namespace std;

// int f(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp)
// {
//     if (day == 0)
//     {
//         int maxi = 0;
//         for (int task = 0; task < 3; task++)
//         {
//             if (task != last)
//                 maxi = max(maxi, points[0][task]);
//         }
//         return maxi;
//     }

//     if (dp[day][last] != -1)
//         return dp[day][last];

//     int maxi = 0;
//     for (int task = 0; task < 3; task++)
//     {
//         if (task != last)
//         {
//             int point = points[day][task] + f(day - 1, task, points, dp);
//             maxi = max(maxi, point);
//         }
//     }
//     return dp[day][last] = maxi;
// }

// int ninja_training(int n, vector<vector<int>> &points)
// {
//     vector<vector<int>> dp(n, vector<int>(4, -1));
//     return f(n - 1, 3, points, dp);
// }

// int main()
// {
//     int n = 3;
//     vector<vector<int>> points = {{10, 40, 70}, {20, 50, 80}, {30, 60, 90}};
//     cout << ninja_training(n, points) << endl;
//     return 0;
// }

// tabulation#include <bits/stdc++.h>

// #include <bits/stdc++.h>
// using namespace std;

// int ninja_training(int n, vector<vector<int>> &points)
// {
//     vector<int> prev(4, 0);

//     prev[0] = max(points[0][1], points[0][2]);
//     prev[1] = max(points[0][0], points[0][2]);
//     prev[2] = max(points[0][0], points[0][1]);
//     prev[3] = max(points[0][0], max(points[0][1], points[0][2]));

//     for (int day = 1; day < n; day++)
//     {
//         vector<int> temp(4, 0);
//         for (int last = 0; last < 4; last++)
//         {
//             for (int task = 0; task < 3; task++)
//             {
//                 if (task != last)
//                 {
//                     temp[last] = max(temp[last], points[day][task] + prev[task]);
//                 }
//             }
//         }
//         prev = temp;
//     }

//     return prev[3];
// }

// int main()
// {
//     int n = 3;
//     vector<vector<int>> points = {{10, 40, 70}, {20, 50, 80}, {30, 60, 90}};
//     cout << ninja_training(n, points) << endl;
//     return 0;
// }

// -----------------------------------------------------------------------------------------

// Grid Unique Paths | Learn Everything about DP on Grids

// recursion
// #include <iostream>
// #include <vector>
// using namespace std;

// int f(int i, int j, vector<vector<int>> &dp) {
//     if (i == 0 && j == 0) {
//         return 1;
//     }

//     if (i < 0 || j < 0) {
//         return 0;
//     }

//     if (dp[i][j] != -1) {
//         return dp[i][j];
//     }

//     int up = f(i - 1, j, dp);
//     int left = f(i, j - 1, dp);

//     return dp[i][j] = up + left;
// }

// int unique_path(int m, int n) {
//     vector<vector<int>> dp(m, vector<int>(n, -1));
//     return f(m - 1, n - 1, dp);
// }

// int main() {
//     int m = 3, n = 3;
//     cout << unique_path(m, n) << endl;  // Output should be 6
//     return 0;
// }

// tabulation
// #include <iostream>
// #include <vector>
// using namespace std;

// int unique_path(int m, int n) {
//     vector<int> prev(n, 0);

//     for (int i = 0; i < m; i++) {
//         vector<int> cur(n, 0);
//         for (int j = 0; j < n; j++) {
//             if (i == 0 && j == 0) {
//                 cur[j] = 1;
//             } else {
//                 int up = 0;
//                 int left = 0;
//                 if (i > 0) up = prev[j];
//                 if (j > 0) left = cur[j - 1];
//                 cur[j] = up + left;
//             }
//         }
//         prev = cur;
//     }

//     // The answer is in the bottom-right cell
//     return prev[n - 1];
// }

// int main() {
//     int m = 3, n = 3;
//     cout << unique_path(m, n) << endl;  // Output should be 6
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------

// Create fibonacci series to a specific length ?

// recursive method

// #include<bits/stdc++.h>
// using namespace std;

// int fun(int n, vector<int> &dp){
//     // Base cases for Fibonacci sequence
//     if(n <= 1) return n;

//     // If the result is already computed, return it from dp array
//     if(dp[n] != -1) return dp[n];

//     // Memoize the result by storing it in dp array
//     return dp[n] = fun(n-1, dp) + fun(n-2, dp);
// }

// int main(){
//     int n;
//     cin >> n;

//     // Initialize dp vector with -1 to indicate uncomputed values
//     vector<int> dp(n+1, -1);

//     // Output the result of the fun function
//     cout << fun(n, dp) << endl;

//     return 0;
// }

// tabulation method

// #include<bits/stdc++.h>
// using namespace std;



// int main(){
//     int n;
//     cin >> n;

//     int prev2 = 0;
//     int prev = 1;

//     for (auto i = 2; i <=n; i++)
//     {
//         int previ = prev + prev2;
//         prev2 = prev;
//         prev = previ;
//     }
    
//     cout << prev;

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;

// int fn(int n){
//     if( n == 0) return 1;
//     if( n == 1) return 0;

//     int left = fn(n-1);
//     int right = fn(n-2);

//     return left + right;
// }

// int main(){
//     int n;
//     cin >> n;

//     cout << fn(n);
//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;

// int fn(int n){
//     if( n == 0) return 1;
//     if( n == 1) return 0;

//     int left = fn(n-1);
//     int right = fn(n-2);

//     return left + right;
// }

// int main(){
//     int n;
//     cin >> n;

//     cout << fn(n);
//     return 0;
// }

// ------------------------------------------------------------------------------------------------
