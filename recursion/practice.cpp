// // Print Name 5 times..!!

// #include <bits/stdc++.h>
// using namespace std;

// void fn(int count)
// {

//     string name = "Nitin";
//     if (count == 5)
//     {
//         return;
//     }
//     cout << name << endl;
//     count++;
//     fn(count);
// }

// int main()
// {
//     fn(0);
// }

// -------------------------------------------------------------------------------------

// Print linearly 1 to n..!!

// #include <bits/stdc++.h>
// using namespace std;

// void fn(int count ,int n)
// {
//     if (count > n) return;
//     cout << count << " ";
//     fn(count+1, n);
// }

// int main()
// {
//     int n;
//     cout << "Enter a num: ";
//     cin >> n;
//     fn(1,n);
// }

// -------------------------------------------------------------------------------------

// Print linearly n to 1..!!

// #include <bits/stdc++.h>
// using namespace std;

// void fn(int count, int n){
//     if(count == 0) return;
//     cout << count << " ";
//     fn(count-1, n);
// }

// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     fn(100, n);
//     return 0;
// }

// // -------------------------------------------------------------------------------------

// // Print linearly 1 to n..by backtrack!!

// #include <bits/stdc++.h>
// using namespace std;

// void fn(int count, int n){
//     if(count < 1) return;
//     fn(count-1, n);
//     cout << count << " ";
// }

// int main(){
//     int n;
//     cout << "Enter the number: " << endl;
//     fn(3, n);
// }

// // -------------------------------------------------------------------------------------

// // Print linearly n to 1..by backtrack!!

// #include <bits/stdc++.h>
// using namespace std;

// void fn(int count, int n){
//     if(count > n) return;
//     fn(count+1, n);
//     cout << count << " ";
// }

// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     fn(1, n);
//     return 0;
// }

// -------------------------------------------------------------------------------------

// Print sum of number 1 to n.

// #include <bits/stdc++.h>
// using namespace std;

// int fn(int count, int n)
// {
//     if (count > n) return 0;
//     return count + fn(count + 1, n);
// }
// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     int sum = fn(1, n);
//     cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;
//     return 0;
// }

// -------------------------------------------------------------------------------------------------

// Print factorial of n.

// #include <bits/stdc++.h>
// using namespace std;

// int fn(int n)
// {
//     if (n == 0 || n == 1)
//         return 1;
//     return n * fn(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     int fact = fn(n);
//     cout << "The ans of " << n << "! is: " << fact;
//     return 0;
// }
// -------------------------------------------------------------------------------------------------

// Print reverse an array.

// #include <bits/stdc++.h>
// using namespace std;

// int reverse_arr(int arr[], int i, int j)
// {
//     if (i >= j)
//         return 0;
//     swap(arr[i], arr[j]);
//     reverse_arr(arr, i + 1, j - 1);
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     reverse_arr(arr, 0, size - 1);
//     for (int i = 0; i < size; i++)
//     {

//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// -------------------------------------------------------------------------------------------------

// check if string is palirdome or not

// #include <bits/stdc++.h>
// using namespace std;

// bool reverse_str(const string &name, int i, int j)
// {
//     if (i >= j)
//         return true;

//     if (tolower(name[i]) != tolower(name[j]))
//         return false;
//     return reverse_str(name, i + 1, j - 1);
// }

// int main()
// {
//     string name = "N4iti4n";
//     int size = name.size();
//     bool result = reverse_str(name, 0, size - 1);
//     // Print the result
//     if (result)
//         cout << "The string \"" << name << "\" is a palindrome." << endl;
//     else
//         cout << "The string \"" << name << "\" is not a palindrome." << endl;

//     return 0;
// }

// -------------------------------------------------------------------------------------------------

// Print fibonacci numbers..!!

#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    fibo(n);
    if (n <= 0)
    {
        cout << "Please enter a positive number." << endl;
    }

    cout << "Your Fibonacci series is: ";
    for (int i = 0; i < n; i++)
    {
        cout << fibo(i) << " ";
    }
    cout << endl;
}