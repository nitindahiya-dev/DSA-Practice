

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



#include <bits/stdc++.h>
using namespace std;

int sumByD(vector<int> &arr, int mid) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += ceil((double)(arr[i]) / (double)(mid));
    }
    return sum;
}

int smallestDivisor(vector<int>& arr, int limit) {
    if (arr.size() > limit) return -1;
    int low = 1, high = *max_element(arr.begin(), arr.end());

    //Apply binary search:
    while (low <= high) {
        int mid = (low + high) / 2;
        if (sumByD(arr, mid) <= limit) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int limit = 8;
    int ans = smallestDivisor(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}

