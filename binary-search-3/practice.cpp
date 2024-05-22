
// Q: First and Last Position of an Element In Sorted Array ?

// #include <bits/stdc++.h>
// using namespace std;

// int first_occurence(vector<int> arr, int n, int target)
// {
//     int ans = -1;
//     int low = 0;
//     int high = arr.size() - 1;

//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (target == arr[mid])
//         {
//             ans = mid;
//             high = mid - 1;
//         }

//         if (target > arr[mid])
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }

//     return ans;
// }
// int last_occurence(vector<int> arr, int n, int target)
// {
//     int ans = -1;
//     int low = 0;
//     int high = arr.size() - 1;

//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (target == arr[mid])
//         {
//             ans = mid;
//             low = mid + 1;
//         }

//         if (target > arr[mid])
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }

//     return ans;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 3, 3, 5, 6, 7};

//     int first = first_occurence(arr, 8, 3);
//     int last = last_occurence(arr, 8, 3);
//     cout << "your first element is available at : " << first << endl;
//     cout << "your last element is available at : " << last << endl;
// }

// ------------------------------------------------------------------------------------------------------------

// Q: Find Peak element in the following array ?

// #include <bits/stdc++.h>
// using namespace std;

// int find_peak(vector<int>& arr) {
//     int low = 0, high = arr.size() - 1;

//     while (low < high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] < arr[mid + 1]) {
//             low = mid + 1; // Peak is in the right half
//         } else {
//             high = mid; // Peak is in the left half or at mid
//         }
//     }

//     return arr[low]; // low and high converge to the peak element
// }

// int main() {
//     vector<int> arr = {0, 1,  1, 31, 5};
//     int ans = find_peak(arr);
//     cout << "Peak element of array is: " << ans << endl;
//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------

// Q : find total number of prime number b/w two specific numbers ?
#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool is_prime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int count_primes(int start, int end) {
    int count = 0;
    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int start = 1; // Specify the start of the range
    int end = 10;   // Specify the end of the range
    int prime_count = count_primes(start, end);
    cout << "Total number of prime numbers between " << start << " and " << end << " is: " << prime_count << endl;
    return 0;
}
