// Q: You are given a sorted array of integers and a target, your task is to search for the target in the given array. Assume the given array does not contain any duplicate numbers ?

// {3, 4, 6, 7, 9, 12, 16, 17} and target = 6.
// low         mid         high
// mid = (8 + 0)/4 = 10
// mid = 4
// arr[4] = 9;
// is 9 == target -- (not) if yes then mid
// is target < 9 -- (yes) then low = mid + 1;
// is target > 9 -- (no) if yes then high = mid - 1

// #include <iostream>
// using namespace std;

// int findTarget(int myArr[], int size, int target)
// {
//     int low = 0;
//     int high = size - 1;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (myArr[mid] == target)
//         {
//             return mid;
//         }
//         else if (myArr[mid] < target)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int myArr[8] = {3, 4, 6, 7, 9, 12, 16, 17};
//     int target = 6;

//     int find = findTarget(myArr, 8, 12);
//     cout << find;
// }

// -------------------------------------------------------------------------------------------------------------------

// Q: Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. If the target is not found then return -1.

// Note: Consider 0 based indexing

// Example 1:
// Input: N = 7, target=13, array[] = {3,4,13,13,13,20,40}
// Output: 4
// Explanation: As the target value is 13 , it appears for the first time at index number 2.

// #include<iostream>
// using namespace std;

// int findArr(int myArr[], int size, int target ){
//     int low = 0;
//     int high = size - 1;
//     int lastOccurrence = -1;

//     while (low <= high)
//     {
//         int mid=(low+high)/2;
//         if(myArr[mid] == target){
//             lastOccurrence = mid;
//             low = mid + 1;
//         } else if (myArr[mid] < target)
//         {
//             low = mid + 1;
//         } else{
//             high = mid - 1;
//         }

//     }
//     return lastOccurrence;
// }

// int main(){
//     int myArr[8] = {3,4,4,13,13,13,20,40};
//     int target = 4;
//     int lastOccurance = findArr(myArr,8 ,target);
//     cout << lastOccurance;
// }

// -----------------------------------------------------------------------------------------------------------------

// Q: You are given a sorted array containing N integers and a number X, you have to find the occurrences of X in the given array.

// Example 1:
// Input:
//  N = 7,  X = 3 , array[] = {2, 2 , 3 , 3 , 3 , 3 , 4}
// Output
// : 4
// Explanation:
//  3 is occurring 4 times in
// the given array so it is our answer.

// #include <iostream>
// using namespace std;

// int lastOccurance(int myArr[], int size, int target)
// {
//     int low = 0;
//     int high = size - 1;
//     int lastOccurance = -1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (myArr[mid] == target)
//         {
//             lastOccurance = mid;
//             low = mid + 1;
//         }
//         else if (myArr[mid] < target)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return lastOccurance;
// }

// int firstOccurance(int myArr[], int size, int target)
// {
//     int low = 0;
//     int high = size - 1;
//     int firstOccurance = -1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (myArr[mid] == target)
//         {
//             firstOccurance = mid;
//             high = mid - 1;
//         }
//         else if (myArr[mid] > target)
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return firstOccurance;
// }

// int countOccurrences(int firstOccurance, int lastOccurance)
// {
//     return lastOccurance - firstOccurance   + 1;
// }

// int main()
// {
//     int myArr[7] = {2, 2, 3, 3, 3, 3, 4};
//     int target = 3;
//     int first = firstOccurance(myArr, 7, target);
//     int last = lastOccurance(myArr, 7, target);
//     int occurrences = countOccurrences(first, last);
//     cout << "Total occurrences of " << target << " is: " << occurrences;
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------

// Q: Given an integer array arr of size N, sorted in ascending order (with distinct values) and a target value k. Now the array is rotated at some pivot point unknown to you. Find the index at which k is present and if k is not present return -1.

// Example 1:
// Input Format: arr = [4,5,6,7,0,1,2,3], k = 0
// Result: 4
// Explanation: Here, the target is 0. We can see that 0 is present in the given rotated sorted array, nums. Thus, we get output as 4, which is the index at which 0 is present in the array.

// #include <iostream>
// using namespace std;

// int indexOfTarget(int myArr[], int size, int target)
// {
//     int low = 0;
//     int high = size - 1;
//     int indexofTarget = -1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         if (myArr[mid] == target)
//         {
//             indexofTarget = mid;
//             break;
//         }
//         if (myArr[low] == myArr[mid] && myArr[high] == myArr[mid])
//         {
//             low = low + 1;
//             high = high + 1;
//             continue;
//         }

//         if (myArr[low] <= myArr[mid])
//         {
//             if (myArr[low] <= target && target <= myArr[low])
//             {
//                 high = mid - 1;
//             }
//             else
//             {
//                 low = mid + 1;
//             }
//         }
//         else
//         {
//             if (myArr[high] <= target && target <= myArr[high])
//             {
//                 low = mid + 1;
//             }
//             else
//             {
//                 high = mid - 1;
//             }
//         }
//     }
//     return indexofTarget;
// }

// int main()
// {
//     int myArr[8] = {4, 5, 6, 4, 0, 1, 2, 4};
//     int target = 0;
//     int ans = indexOfTarget(myArr, 8, target);
//     cout << ans;
// }

// -----------------------------------------------------------------------------------------------------------------

// Q: Given an integer array arr of size N, sorted in ascending order (with distinct values). Now the array is rotated between 1 to N times which is unknown. Find the minimum element in the array.

// Pre-requisites: Search in Rotated Sorted Array I,  Search in Rotated Sorted Array II & Binary Search algorithm

// Example
// Input Format:
//  arr = [4,5,6,7,0,1,2,3]
// Result:
//  0
// Explanation:
//  Here, the element 0 is the minimum element in the array.

// #include<iostream>
// #include<vector>
// #include <climits>
// using namespace std;

// int mini(vector<int> arr){
//     int low = 0;
//     int high = arr.size()-1;
//     int ans = INT_MAX;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         if (arr[low] <= arr[high])
//         {
//             ans = min(ans,arr[low]);
//             break;
//         }

//         if (arr[low] <= arr[mid])
//         {
//             ans = min(ans,arr[low]);
//             low = mid + 1;
//         } else {
//             ans = min(ans,arr[mid]);
//             high = mid - 1;
//         }

//     }
//     return ans;
// }

// int main(){
//     vector<int> arr={4,5,6,7,10,11,2,3};
//     int findMini = mini(arr);
//     cout << findMini;
// }

// ---------------------------------------------------------------------------------------------------------------

// Q: Given an integer array arr of size N, sorted in ascending order (with distinct values). Now the array is rotated between 1 to N times which is unknown. Find how many times the array has been rotated.

// Pre-requisites: Find minimum in Rotated Sorted Array,  Search in Rotated Sorted Array II & Binary Search algorithm

// Examples
// Example 1:
// Input Format:
//  arr = [4,5,6,7,0,1,2,3]
// Result:
//  4
// Explanation:
//  The original array should be [0,1,2,3,4,5,6,7]. So, we can notice that the array has been rotated 4 times.

// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int findRotatePoint(vector<int> &arr)
// {
//     int low = 0;
//     int high = arr.size() - 1;
//     int ans = INT_MAX;
//     int index = -1;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         if (arr[low] <= arr[high])
//         {
//             ans = min(ans, arr[low]);
//             index = low;
//             break;
//         }

//         if (arr[low] <= arr[mid])
//         {
//             ans = min(ans, arr[low]);
//             index = ans;
//             low = mid + 1;
//         }
//         else
//         {
//             ans = min(ans, arr[mid]);
//             high = mid - 1;
//             index = ans;
//         }
//     }
//     return index;
// }

// int main()
// {
//     vector<int> arr = {4, 5, 6, 7, 8, 9, 2, 3};
//     int mini = findRotatePoint(arr);
//     cout << "it rototed at" << mini;

// }

// ----------------------------------------------------------------------------------------------------------------

// Given an array of N integers. Every number in the array except one appears twice. Find the single number in the array.

// Pre-requisite: Binary Search Algorithm

// Example :
// Input Format:
//  arr[] = {1,1,2,2,3,3,4,5,5,6,6}
// Result:
//  4
// Explanation:
//  Only the number 4 appears once in the array.

// #include <iostream>
// #include <vector>
// using namespace std;

// int findSingle(vector<int> &arr)
// {
//     int size = arr.size() - 1;

//     if (size == 1)
//         return arr[0];
//     if (arr[0] != arr[1])
//         return arr[0];
//     if (arr[size - 1] != arr[size - 2])
//         return arr[size - 1];

//     int low = 1;
//     int high = size - 2;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
//         {
//             return arr[mid];
//         }

//       /* This part of the code is used to determine whether to move the search range to the left or
//       right based on the comparison of the middle element with its adjacent elements. */
//         if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1]))
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
//     int single = findSingle(arr);
//     cout << single;
// }