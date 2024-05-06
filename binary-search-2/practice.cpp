

// Q:  You are given a positive integer n. Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of 'sqrt(n)'.

// Note: The question explicitly states that if the given number, n, is not a perfect square, our objective is to find the maximum number, x, such that x squared is less than or equal to n (x*x <= n). In other words, we need to determine the floor value of the square root of n.

// Example:
// Input Format:
//  n = 36
// Result:
//  6
// Explanation:
//  6 is the square root of 36.

// ==> Brute force
// #include<iostream>
// using namespace std;

// int sqroot(int n){
//     for (int i = 0; i < n; i++)
//     {
//         if (i*i >= n)
//         {
//             return i;
//         }

//     }

// }

// int main(){
//     int n = 49;
//     int ans = sqroot(n);
//     cout << ans;
// }

// ==> Binary Search

// #include<iostream>
// #include<climits>
// using namespace std;
// int sqrt(int n){
//     int low = 1;
//     int high = n;
//     while (low<=high)
//     {
//         long long mid=(low + high)/2;
//         long long val = mid * mid;
//         if (val <= n)
//         {
//             low = mid + 1;

//         } else {
//             high = mid - 1;
//         }

//     }
// }

// int main(){
//     int n = 36;
//     int ans = sqrt(n);
//     cout << ans;
// }

//------------------------------------------------------------------------------------------------------------------

// Q: Given two numbers N and M, find the Nth root of M. The nth root of a number M is defined as a number X when raised to the power N equals M. If the 'nth root is not an integer, return -1.

// Examples
// Example 1:
// Input Format:
//  N = 3, M = 27
// Result:
//  3
// Explanation:
//  The cube root of 27 is equal to 3.
// 3*3*3 = 24

// Example 2:
// Input Format:
//  N = 4, M = 69
// Result:
//  -1
// Explanation:
//  The 4th root of 69 does not exist. So, the answer is -1.
// 4*4*4*4 = 64 not equal to 81 = -1.

// #include<iostream>
// using namespace std;

// int nthroot(int n, int m) {
//     //Use linear search on the answer space:
//     for (int i = 1; i <= m; i++) {
//         long long val = func(i, n);
//         if (val == m * 1ll) return i;
//         else if (val > m * 1ll) break;
//     }
//     return -1;
// }
// int main (){
//     int n = 3;
//     int m = 4;
//     int nth = nthroot(n,m);
//     cout << nth;
// }

//--------------------------------------------------------------------------------------------------------------

// ---------------------------------------------------------------------------------------------------------------

// Q: A monkey is given ‘n’ piles of bananas, whereas the 'ith' pile has ‘a[i]’ bananas. Eg:- {7, 15, 6, 3}
// An integer ‘h’ is also given, which denotes the time (in hours) for all the bananas to be eaten.

// Each hour, the monkey chooses a any pile of bananas and eats ‘k’ bananas.
// If the pile contains less than ‘k’ bananas, then the monkey consumes all the bananas
// and won’t eat any more bananas in that hour.

// Find the maximum number of bananas ‘k’ to eat per hour so that the monkey can eat all the bananas within ‘h’ hours.

// Example:
// Input Format:
// h = hour
// n = given number of piles
// a[] = no. of bananas
//  N = 4, a[] = {7, 15, 6, 3}, h = 8
// Result:
//  5
// Explanation:
//  If Koko eats 5 bananas/hr, he will take 2, 3, 2, and 1 hour to eat the piles accordingly. So, he will take 8 hours to complete all the piles.

// #include <bits/stdc++.h>
// using namespace std;

// int maxInOnePile(vector<int> &bananas)
// {
//     int maxPile = INT_MIN;
//     for (int i = 0; i < bananas.size(); i++)
//     {
//         maxPile = max(maxPile, bananas[i]);
//     }
//     return maxPile;
// }

// int totalTime(vector<int> &bananas, int hour)
// {
//     int tTime = 0;
//     for (int i = 0; i < bananas.size(); i++)
//     {
//         tTime += ceil(double(bananas[i]) / double(hour));
//         // 7/8 + 15/8 + 6/8 + 3/8 = 1 + 2 + 1 + 1
//     }
//     return tTime;
// }

// int miniTime(vector<int> bananas, int hour)
// {
//     int low = 1, high = maxInOnePile(bananas);

//     //apply binary search:
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         int totalH = totalTime(bananas, mid);
//         if (totalH <= hour) {
//             high = mid - 1;
//         }
//         else {
//             low = mid + 1;
//         }
//     }
//     return low;
// }

// int main()
// {
//     vector<int> bananas = {7, 15, 6, 3};
//     int hour = 8;
//     int ans = miniTime(bananas, hour);
//         cout << "Koko should eat atleast " << ans << " bananas/hr.\n";

// }

// -----------------------------------------------------------------------------------------------------------------

// Q: uou are given 'N’ roses and you are also given an array 'arr'  where 'arr[i]'  denotes that the 'ith' rose will bloom on the 'arr[i]th' day.

// You can only pick already bloomed roses that are adjacent to make a bouquet.
// You are also told that you require exactly 'k' adjacent bloomed roses to make a single bouquet.
// Find the minimum number of days required to make at least ‘m' bouquets each containing 'k' roses. Return -1 if it is not possible.

// Example 1:
// Input Format:
//  N = 8, arr[] = {7, 7, 7, 7, 13, 11, 12, 7}, m = 2, k = 3
// m = no. of bouquets
// k = no. of roses req. for 1 bouquets.
// Result:
//  12
// Explanation:
//  On the 12th the first 4 flowers and the last 3 flowers would have already bloomed. So, we can easily make 2 bouquets, one with the first 3 and another with the last 3 flowers.

// #include <bits/stdc++.h>
// using namespace std;

// bool possible(vector<int> &arr, int day, int m, int k) {
//     int n = arr.size(); //size of the array
//     int cnt = 0;
//     int noOfB = 0;
//     // count the number of bouquets:
//     for (int i = 0; i < n; i++) {
//         if (arr[i] <= day) {
//             cnt++;
//         }
//         else {
//             noOfB += (cnt / k);
//             cnt = 0;
//         }
//     }
//     noOfB += (cnt / k);
//     return noOfB >= m;
// }
// int roseGarden(vector<int> arr, int k, int m) {
//     long long val = m * 1ll * k * 1ll;
//     int n = arr.size(); //size of the array
//     if (val > n) return -1; //impossible case.
//     //find maximum and minimum:
//     int mini = INT_MAX, maxi = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         mini = min(mini, arr[i]);
//         maxi = max(maxi, arr[i]);
//     }

//     //apply binary search:
//     int low = mini, high = maxi;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (possible(arr, mid, m, k)) {
//             high = mid - 1;
//         }
//         else low = mid + 1;
//     }
//     return low;
// }

// int main()
// {
//     vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
//     int k = 3;
//     int m = 2;
//     int ans = roseGarden(arr, k, m);
//     if (ans == -1)
//         cout << "We cannot make m bouquets.\n";
//     else
//         cout << "We can make bouquets on day " << ans << "\n";
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------

// Q: You are given an array of integers 'arr' and an integer i.e. a threshold value 'limit'. Your task is to find the smallest positive integer divisor, such that upon dividing all the elements of the given array by it, the sum of the division's result is less than or equal to the given threshold value.

// Examples
// Example 1:
// Input Format:
//  N = 5, arr[] = {1,2,3,4,5}, limit = 8
// Result:
//  3
// Explanation:
//  We can get a sum of 15(1 + 2 + 3 + 4 + 5) if we choose 1 as a divisor.
// The sum is 9(1 + 1 + 2 + 2 + 3)  if we choose 2 as a divisor. Upon dividing all the elements of the array by 3, we get 1,1,1,2,2 respectively. Now, their sum is equal to 7 <= 8 i.e. the threshold value. So, 3 is the minimum possible answer.

// #include <bits/stdc++.h>
// using namespace std;

// int sumByD(vector<int> &arr, int mid) {
//     int sum = 0;
//     for (int i = 0; i < arr.size(); i++) {
//         sum += ceil((double)(arr[i]) / (double)(mid));
//     }
//     return sum;
// }

// int smallestDivisor(vector<int>& arr, int limit) {
//     if (arr.size() > limit) return -1;
//     int low = 1, high = *max_element(arr.begin(), arr.end());

//     //Apply binary search:
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (sumByD(arr, mid) <= limit) {
//             high = mid - 1;
//         }
//         else {
//             low = mid + 1;
//         }
//     }
//     return low;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int limit = 8;
//     int ans = smallestDivisor(arr, limit);
//     cout << "The minimum divisor is: " << ans << "\n";
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------

// Q: You are the owner of a Shipment company. You use conveyor belts to ship packages from one port to another. The packages must be shipped within 'd' days.
// The weights of the packages are given in an array 'of weights'. The packages are loaded on the conveyor belts every day in the same order as they appear in the array. The loaded weights must not exceed the maximum weight capacity of the ship.
// Find out the least-weight capacity so that you can ship all the packages within 'd' days.

// Examples
// Example 1:
// Input Format:
//  N = 5, weights[] = {5,4,5,2,3,4,5,6}, d = 5
// Result:
//  9
// Explanation:
//  If the ship capacity is 9, the shipment will be done in the following manner:
// Day         Weights            Total
// 1        -       5, 4          -        9
// 2        -       5, 2          -        7
// 3        -       3, 4          -        7
// 4        -       5             -        5
// 5        -       6             -        6
// So, the least capacity should be 9.

// #include <bits/stdc++.h>
// using namespace std;

// int findDays(vector<int> &weights, int cap){
// int days = 1;
// int load = 0;
//  for (int i = 0; i < weights.size(); i++)
//  {
//     if (load + weights[i] > cap)
//     {
//         days++;
//         load = weights[i];
//     } else {
//         load = load + weights[i];
//     }

//  }
//  return days;

// }

// int leastWeightCapacity(vector<int> &weights, int d) {
//     int low = *max_element(weights.begin(), weights.end());
//     int high = accumulate(weights.begin(), weights.end(), 0);

//     while (low < high)
//     {
//         int mid = (low + high)/2;
//         int numOfDays = findDays(weights, mid);
//         if (numOfDays <= d)
//         {
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }

//     }

//     return low;
// }

// int main()
// {
//     vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
//     int d = 5;
//     int ans = leastWeightCapacity(weights, d);
//     cout << "The minimum capacity should be: " << ans << "\n";
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------

// Q: You are given a strictly increasing array ‘vec’ and a positive integer 'k'. Find the 'kth' positive integer missing from 'vec'.

// Example:
// Input Format:
//  vec[]={4,7,9,10}, k = 4
// Result:
//  5
// Explanation:
//  The missing numbers are 1, 2, 3, 5, 6, 8, 11, 12, ……, and so on. Since 'k' is 4, the fourth missing element is 5.

// #include <bits/stdc++.h>
// using namespace std;

// int missingK(vector < int > vec, int n, int k) {
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         int missing = vec[mid] - (mid + 1);
//         if (missing < k) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }
//     return k + high + 1;
// }

// int main()
// {
//     vector<int> vec = {4, 7, 9, 10};
//     int n = 4, k = 4;
//     int ans = missingK(vec, n, k);
//     cout << "The missing number is: " << ans << "\n";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int missingTarget(vector<int> arr, int target){
//     int low = 0 ; int high = arr.size() - 1;
//     while (low <= high)
//     {
//         int mid = (low + high)/2;
//         int missing = arr[mid] - (mid + 1);
//         if (missing <= target) low = mid + 1;
//         else high = mid - 1;

//     }
//     return low + target;
// }

// int main()
// {
//     vector<int> arr = {4, 7, 9, 10};
//     int n = 4, target = 5;
//     int ans = missingTarget(arr, target);
//     cout << "The missing number is: " << ans << "\n";
//     return 0;
// }

//-----------------------------------------------------------------------------------------------------------------

// Q: You are given an array 'arr' of size 'n' which denotes the position of stalls.
// You are also given an integer 'k' which denotes the number of aggressive cows.
// You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.
// Find the maximum possible minimum distance.
// (distance b/w aggrasive cow must max b/w them ..... that's why they are asking mimimum distance b/w cow should be maximum)

// Example:
// Input Format:
//  N = 6, k = 4, arr[] = {0,3,4,7,10,9}
// Result:
//  3
// Explanation:
//  The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions {0, 3, 7, 10}. Here the distances between cows are 3, 4, and 3 respectively. We cannot make the minimum distance greater than 3 in any ways.

// #include <bits/stdc++.h>
// using namespace std;

// bool canWePlace(vector<int> &stalls, int distance, int cow)
// {
//     int countCow = 1;
//     int last = stalls[0];
//     for (int i = 0; i < stalls.size(); i++)
//     {
//         if (stalls[i] - last >= distance)
//         {
//             countCow++;
//             last = stalls[i];
//         }
//         if (countCow >= cow)
//             return true;
//     }
//     return false;
// }

// int aggressiveCows(vector<int> &stalls, int cows)
// {
//     sort(stalls.begin(), stalls.end());
//    int low = 1, high = stalls[stalls.size() - 1] - stalls[0];
//     //apply binary search:
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (canWePlace(stalls, mid, cows) == true) {
//             low = mid + 1;
//         }
//         else high = mid - 1;
//     }
//     return high;
// }

// int main()
// {
//     vector<int> stalls = {0, 3, 4, 7, 10, 9};
//     int cows = 4;
//     int ans = aggressiveCows(stalls, cows);
//     cout << "The maximum possible minimum distance is: " << ans << "\n";
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------

// Q: Given an array ‘arr of integer numbers, ‘ar[i]’ represents the number of pages in the ‘i-th’ book. There are a ‘m’ number of students, and the task is to allocate all the books to the students.
// Allocate books in such a way that:

// Each student gets at least one book.
// Each book should be allocated to only one student.
// Book allocation should be in a contiguous manner.
// You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum. If the allocation of books is not possible. return -1

// Example:
// Input Format:
//  n = 4, m = 2, arr[] = {12, 34, 67, 90}
// Result:
//  113
// Explanation:
//  The allocation of books will be 12, 34, 67 | 90. One student will get the first 3 books and the other will get the last one.

// #include <bits/stdc++.h>
// using namespace std;

// int countStudents(vector<int> &arr, int pages)
// {
//     int students = 1;
//     long long pagesStudent = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (pagesStudent + arr[i] <= pages)
//         {
//             // add pages to current student
//             pagesStudent += arr[i];
//         }
//         else
//         {
//             // add pages to next student
//             students++;
//             pagesStudent = arr[i];
//         }
//     }
//     return students;
// }

// int findPages(vector<int> &arr, int students)
// {
//     // book allocation impossible:
//     if (students > arr.size())
//         return -1;

//     for (int pages = *max_element(arr.begin(), arr.end()); pages <= accumulate(arr.begin(), arr.end(), 0); pages++)
//     {
//         if (countStudents(arr, pages) == students)
//         {
//             return pages;
//         }
//     }
//     return *max_element(arr.begin(), arr.end());
// }

// int main()
// {
//     vector<int> arr = {25, 46, 28, 49, 24};
//     int students = 4;
//     int ans = findPages(arr, students);
//     cout << "The answer is: " << ans << "\n";
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------------

// Given an integer array ‘A’ of size ‘N’ and an integer ‘K'. Split the array ‘A’ into ‘K’ non-empty subarrays such that the largest sum of any subarray is minimized. Your task is to return the minimized largest sum of the split.
// A subarray is a contiguous part of the array.

// Pre-requisite: BS-18. Allocate Books or Book Allocation | Hard Binary Search

// Example :
// Input Format:
//  N = 5, a[] = {1,2,3,4,5}, k = 3
// Result:
//  6
// Explanation:
//  There are many ways to split the array a[] into k consecutive subarrays. The best way to do this is to split the array a[] into [1, 2, 3], [4], and [5], where the largest sum among the three subarrays is only 6.


#include <bits/stdc++.h>
using namespace std;

int countPartitions(vector<int> &a, int maxSum)
{
    int partitions = 1;
    long long subArraySum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (subArraySum + a[i] <= maxSum)
        {
            subArraySum += a[i];
        }
        else
        {
            partitions++;
            subArraySum = a[i];
        }
    }
    return partitions;
}

int largestSubarraySumMinimized(vector<int> &a, int dividedIn)
{
    int low = *max_element(a.begin(), a.end());
    int high = accumulate(a.begin(), a.end(), 0);
    int result = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int partitions = countPartitions(a, mid);
        if (partitions <= dividedIn)
        {
            result = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}

int main()
{
    vector<int> a = {10, 20, 30, 40};
    int dividedIn = 2;
    int ans = largestSubarraySumMinimized(a, dividedIn);
    cout << "The answer is: " << ans << "\n";
    return 0;
}
