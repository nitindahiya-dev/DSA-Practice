// Q: You have been given a non-empty grid ‘mat’ with 'n' rows and 'm' columns consisting of only 0s and 1s. All the rows are sorted in ascending order.
// Your task is to find the index of the row with the maximum number of ones.
// Note: If two rows have the same number of ones, consider the one with a smaller index. If there's no row with at least 1 zero, return -1.

// Pre-requisite: Lower Bound implementation, Upper Bound implementation, & Find the first occurrence of a number.

// Example :
// Input Format:
//  n = 3, m = 3,
// mat[] =
// 1 1 1
// 0 0 1
// 0 0 0
// Result:
//  0
// Explanation:
//  The row with the maximum number of ones is 0 (0 - indexed).

// #include <bits/stdc++.h>
// using namespace std;

// int lowerBound(vector<int> arr, int n, int x) {
//     int low = 0, high = n - 1;
//     int ans = n;

//     while (low <= high) {
//         int mid = (low + high) / 2;
//         // maybe an answer
//         if (arr[mid] >= x) {
//             ans = mid;
//             //look for smaller index on the left
//             high = mid - 1;
//         }
//         else {
//             low = mid + 1; // look on the right
//         }
//     }
//     return ans;
// }
// int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
//     int cnt_max = 0;
//     int index = -1;

//     //traverse the rows:
//     for (int i = 0; i < n; i++) {
//         // get the number of 1's:
//         int cnt_ones = m - lowerBound(matrix[i], m, 1);
//         if (cnt_ones > cnt_max) {
//             cnt_max = cnt_ones;
//             index = i;
//         }
//     }
//     return index;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
//     int n = 3, m = 3;
//     cout << "The row with maximum no. of 1's is: " <<
//          rowWithMax1s(matrix, n, m) << '\n';
// }

//-------------------------------------------------------------------------------------------------------------------

// Q : You have been given a 2-D array 'mat' of size 'N x M' where 'N' and 'M' denote the number of rows and columns, respectively. The elements of each row are sorted in non-decreasing order. Moreover, the first element of a row is greater than the last element of the previous row (if it exists). You are given an integer ‘target’, and your task is to find if it exists in the given 'mat' or not.

// Example :
// Input Format:
//  N = 3, M = 4, target = 8,
// mat[] =
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// Result:
//  true
// Explanation:
//  The ‘target’  = 8 exists in the 'mat' at index (1, 3).

// #include <bits/stdc++.h>
// using namespace std;

// bool find_number(vector<vector<int>> &matrix, int target)
// {
//     int n = matrix.size();
//     int m = matrix[0].size();

//     int low = 0, high = n * m - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         int row = mid / m, col = mid % m;
//         if (matrix[row][col] == target)
//             return true;
//         else if (matrix[row][col] < target)
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }

//     return false;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
//     find_number(matrix, 8) == true ? cout << "True" : cout << "False";
// }

//---------------------------------------------------------------------------------------------------------------

//  Q : You have been given a 2-D array 'mat' of size 'N x M' where 'N' and 'M' denote the number of rows and columns, respectively. The elements of each row and each column are sorted in non-decreasing order.
// But, the first element of a row is not necessarily greater than the last element of the previous row (if it exists).
// You are given an integer ‘target’, and your task is to find if it exists in the given 'mat' or not.

// Pre-requisite: Search in a 2D sorted matrix

// Example :
// Input Format:
//  N = 5, M = 5, target = 14
// mat[] =

// Result:
//  true
// Explanation:
//  Target 14 is present in the cell (3, 2)(0-based indexing) of the matrix. So, the answer is true.

// #include <bits/stdc++.h>
// using namespace std;

// int find_number(vector<vector<int>> &arr, int target)
// {
//     int n = arr.size();
//     int m = arr[0].size();
//     int row = 0, col = m - 1;

//     while (row < n && col >= 0)
//     {
//         if (arr[row][col] == target)
//             return true;
//         else if (arr[row][col] < target)
//             row++;
//         else
//             col--;
//     }
//     return false;
// }

// int main()
// {
//     vector<vector<int>> arr = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};

//     find_number(arr, 8) == true ? cout << "true" : cout << "False";
// }


//------------------------------------------------------------------------------------------------------------------

// Q :Given a row-wise sorted matrix of size r*c, where r is no. of rows and c is no. of columns, find the median in the given matrix.

// Assume - r*c is odd

// Example :
// Input: 
// r = 3 , c = 3
// 1 4 9 
// 2 5 6
// 3 8 7
// Output: Median = 5
// Explanation: If we find the linear sorted array, the array becomes 1 2 3 4 5 6 7 8 9
// So, median = 5


// #include <bits/stdc++.h>
// using namespace std;
// int countSmallerThanMid(vector<int> &row, int mid)
// {
//   int l = 0, h = row.size() - 1;
//   while (l <= h)
//   {
//     int md = (l + h) >> 1;
//     if (row[md] <= mid)
//     {
//       l = md + 1;
//     }
//     else
//     {
//       h = md - 1;
//     }
//   }
//   return l;
// }
// int findMedian(vector<vector<int>> &A)
// {
//   int low = 1;
//   int high = 1e9;
//   int n = A.size();
//   int m = A[0].size();
//   while (low <= high)
//   {
//     int mid = (low + high) >> 1;
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//       cnt += countSmallerThanMid(A[i], mid);
//     }
//     if (cnt <= (n * m) / 2)
//       low = mid + 1;
//     else
//       high = mid - 1;
//   }
//   return low;
// }
// int main()
// {
//   int row = 3, col = 3;
//   vector<vector<int>> arr = {{1, 3, 8},
//                              {2, 3, 4},
//                              {1, 2, 5}};
//   cout <<"The median of the row-wise sorted matrix is: "<<findMedian(arr)<<endl;
//   return 0;
// }