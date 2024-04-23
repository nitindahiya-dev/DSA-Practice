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

#include <iostream>
using namespace std;

int rotatedSortTarget(int myArr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int findTarget = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (myArr[mid] == target)
        {
            findTarget = mid;
            break;
        }

        if (myArr[low] <= myArr[mid])
        {
            if (myArr[low] <= target && target <= myArr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (myArr[mid] < target && target <= myArr[high])
            {
                low = mid + 1; // Target is in the right half
            }
            else
            {
                high = mid - 1; // Target is in the left half
            }
        }
    }
    return findTarget;
}

int main()
{
    int myArr[8] = {4, 5, 6, 7, 0, 1, 2, 3};
    int target = 2;
    int findTarget = rotatedSortTarget(myArr, 8, target);
    cout << findTarget;
}