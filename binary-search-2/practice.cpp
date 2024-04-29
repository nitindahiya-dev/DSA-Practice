

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


#include <bits/stdc++.h>
using namespace std;

int maxInOnePile(vector<int> &bananas)
{
    int maxPile = INT_MIN;
    for (int i = 0; i < bananas.size(); i++)
    {
        maxPile = max(maxPile, bananas[i]);
    }
    return maxPile;
}

int totalTime(vector<int> &bananas, int hour)
{
    int tTime = 0;
    for (int i = 0; i < bananas.size(); i++)
    {
        tTime += ceil(double(bananas[i]) / double(hour));
        // 7/8 + 15/8 + 6/8 + 3/8 = 1 + 2 + 1 + 1
    }
    return tTime;
}

int miniTime(vector<int> bananas, int hour)
{
    int low = 1, high = maxInOnePile(bananas);

    //apply binary search:
    while (low <= high) {
        int mid = (low + high) / 2;
        int totalH = totalTime(bananas, mid);
        if (totalH <= hour) {
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
    vector<int> bananas = {7, 15, 6, 3};
    int hour = 8;
    int ans = miniTime(bananas, hour);
        cout << "Koko should eat atleast " << ans << " bananas/hr.\n";

}