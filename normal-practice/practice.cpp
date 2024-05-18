// Q: Given an array, we have to find the largest element in the array.

// Example :
// Input:
//  arr[] = {2,5,1,3,0};
// Output:
//  5
// Explanation:
//  5 is the largest element in the array.

// #include <bits/stdc++.h>
// using namespace std;

// int find_bigest(vector<int> arr, int n)
// {
//     int ans = -1;

// for (int i = 0; i < n; i++)
// {
//     if(arr[i] > ans) {
//         ans = arr[i];
//     }else{
//         i++;
//     }
// }

//     return ans;
// }

// int main()
// {
//     vector<int> arr = {2, 5, 1, 3, 0};
//     int num = find_bigest(arr, 5);
//     if (num == -1)
//     {
//         cout << "All numbers are equal" << endl;
//     }
//     else
//     {
//         cout << num << endl;
//     }
// }

// ------------------------------------------------------------------------------------------------------------------

// Q: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

// Example:
// Input:
//  [1,2,4,7,7,5]
// Output:
//  Second Smallest : 2
// 	Second Largest : 5
// Explanation:
//  The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2;

// #include <bits/stdc++.h>
// using namespace std;

// int find_ans(vector<int> arr, int n) {
//     int largest = INT_MIN;
//     int second_largest = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > largest) {
//             second_largest = largest;
//             largest = arr[i];
//         } else if (arr[i] > second_largest && arr[i] < largest) {
//             second_largest = arr[i];
//         }
//     }
//     return second_largest; // Return the second largest element found
// }

// int main() {
//     vector<int> arr = {1, 2, 4, 7, 7, 5};
//     int second_largest_element = find_ans(arr, 6);
//     cout << second_largest_element << endl; // Output the second largest element
// }

// Two consecutive equal values are considered to be sorted.

// Example :
// Input:
//  N = 5, array[] = {1,2,3,4,5}
// Output
// : True.
// Explanation:

// #include<bits/stdc++.h>

// using namespace std;

// bool isSorted(int arr[], int n) {
//   for (int i = 1; i < n; i++) {
//     if (arr[i] < arr[i - 1])
//       return false;
//   }

//   return true;
// }

// int main() {

//   int arr[] = {1, 2, 3, 4, 5}, n = 5;

//   printf("%s", isSorted(arr, n) ? "True" : "False");

// }

// --------------------------------------------------------------------------------------------------------------

// Q: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

// If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

// Note: Return k after placing the final result in the first k slots of the array.

// Example :
// Input:
//  arr[1,1,2,2,2,3,3]

// Output:
//  arr[1,2,3,_,_,_,_]

// Explanation:
//  Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.

// #include <bits/stdc++.h>
// using namespace std;

// int remove_duplicate(vector<int>& arr) {
//     int i = 0;
//     for (int j = 1; j < arr.size(); j++) {
//         if (arr[i] != arr[j]) {
//             i++;
//             arr[i] = arr[j];
//         }
//     }
//     return i + 1;
// }

// int main() {
//     vector<int> arr = {1, 1, 2, 2, 2, 3, 3};
//     int output = remove_duplicate(arr);

//     for (int i = 0; i < output; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

//---------------------------------------------------------------------------------------------------------------

// Q: Given an array of N integers, left rotate the array by one place.

// Example :
// Input:
//  N = 5, array[] = {1,2,3,4,5}
// Output:
//  2,3,4,5,1
// Explanation:

// #include <bits/stdc++.h>
// using namespace std;

// void rotate_one(vector<int> arr, int n)
// {
//     int cage[n];
//     for (int i = 0; i < n; i++)
//     {
//         cage[i - 1] = arr[i];
//     }

//     cage[n - 1] = arr[0];

//     for (int i = 0; i < n; i++)
//     {
//         cout << cage[i] <<  " ";
//     }

//     cout << endl;

// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     rotate_one(arr, 5);
// }

// ---------------------------------------------------------------------------------------------------------------

// Q: Given an array of integers, rotating array of elements by k elements either left or right.

// Example :
// Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
// Output: 6 7 1 2 3 4 5
// Explanation: array is rotated to right by 2 position .

#include <iostream>
using namespace std;
void Rotatetoright(int arr[], int n, int k)
{
    if (n == 0)
        return;
    k = k % n;
    if (k > n)
        return;
    int temp[k];
    for (int i = n - k; i < n; i++)
    {
        temp[i - n + k] = arr[i];
    }
    for (int i = n - k - 1; i >= 0; i--)
    {
        arr[i + k] = arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    Rotatetoright(arr, n, k);
    cout << "After Rotating the elements to right " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
