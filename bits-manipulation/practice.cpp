// Q : Convert integer to binary ?

// 13 = 1101

// #include <bits/stdc++.h>
// using namespace std;

// string convert_it(int n)
// {
//     string str = "";
//     while (n > 0)
//     {
//         if (n % 2 == 1)
//         {
//             str += "1";
//         }
//         else
//         {
//             str += "0";
//         }
//         n = n / 2;
//     }
//     reverse(str.begin(), str.end());
//     return str;
// }

// int main()
// {
//     int input = 0;
//     string ans = convert_it(input);
//     cout << ans << endl;
// }

// -----------------------------------------------------------------------------------------------

// Q : Convert binary to integer ?

// 1101 = 13
// 1* 2**3 + 1* 2*2 + 0* 2**0 + 1* 2**0

// #include<bits/stdc++.h>
// using namespace std;

// int convert_it(string n){

//     int sum = 0;
//     for (int i = 0; i < n.size(); i++)
//     {
//          if(n[i] == '1'){
//             sum+= pow(2,n.size()-1-i);
//          }
//     }
//     return sum;
// }

// int main(){
//     string input = "1101";
//     int ans = convert_it(input);

//     cout << ans << endl;
// }

// -------------------------------------------------------------------------------------------------

// 1st Complement !!

// #include <bits/stdc++.h>
// using namespace std;

// string output(string n)
// {
//     for (int i = 0; i < n.size(); i++)
//     {
//         if (n[i] == '1')
//         {
//             n[i] = '0';
//         }
//         else
//         {
//             n[i] = '1';
//         }
//     }
//     return n;
// };

// int main()
// {
//     string input = "1101";
//     string ans = output(input);
//     cout << "normal input is: " << input << endl;
//     cout << "1st Complement is: " << ans << endl;
// }

// ---------------------------------------------------------------------------------------------------

// 2nd Complement

// (1101 => 0010 => 0011 (add 1 in 1st complement))

// #include<bits/stdc++.h>
// using namespace std;

// string first_complement(string n){
//     for (int i = 0; i < n.size(); i++)
//     {
//         if(n[i] == '1'){
//             n[i] = '0';
//         } else {
//             n[i] = '1';
//         }
//     }
//     return n;
// }

// string second_complement(string n){
//     for (int i = 0; i < n.size(); i++)
//     {
//         if(i = n.size()-1){
//             if (n[i] == '1')
//             {
//                 n[i] = '0';
//             } else {
//                 n[i] = '1';

//             }
//         }
//     }
//     return n;
// }

// int main(){
//     string input = "111101";
//     string first_ans = first_complement(input);
//     string second_ans = second_complement(first_ans);

//     cout << "without complement: " << input << endl;
//     cout << "first complement: " << first_ans << endl;
//     cout << "second complement: " << second_ans;
// }

// -------------------------------------------------------------------------------------------------

// Swap 2 Numbers
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 6;  // initial value of a
//     int b = 7;  // initial value of b

//     cout << "Before swap, a is: " << a << endl;
//     cout << "Before swap, b is: " << b << endl;

//     // Step 1: a = a ^ b
//     a = a ^ b;
//     cout << "After step 1, a is: " << a << " (a ^ b)" << endl;
//     cout << "After step 1, b is: " << b << " (unchanged)" << endl;

//     // Step 2: b = a ^ b
//     b = a ^ b;
//     cout << "After step 2, a is: " << a << " (unchanged)" << endl;
//     cout << "After step 2, b is: " << b << " (a ^ b ^ b = original a)" << endl;

//     // Step 3: a = a ^ b
//     a = a ^ b;
//     cout << "After step 3, a is: " << a << " (a ^ b ^ a = original b)" << endl;
//     cout << "After step 3, b is: " << b << " (unchanged)" << endl;

//     cout << "After swap, a is: " << a << endl;
//     cout << "After swap, b is: " << b << endl;

//     return 0;
// }

// -----------------------------------------------------------------------------------------------

// check if the ith bits is set or not ?

// N = 13  i = 2  => [1 1 0 1] i = 1; because 0 = 1, 1 = 0, and 2 = 1;

// #include <bits/stdc++.h>
// using namespace std;

// string convert_it(int n)
// {
//     string binary_str = "";
//     while (n > 0)
//     {
//         if (n % 2 == 1)
//         {
//             binary_str += '1';
//         }
//         else
//         {
//             binary_str += '0';
//         }
//         n /= 2;
//     }
//     reverse(binary_str.begin(), binary_str.end());
//     return binary_str;
// }

// bool find_set(string binary_str, int k)
// {
//     if (k >= 0 && k < binary_str.size())
//     {
//         return (binary_str[k] == '1');
//     }
//     return false;
// }

// int main()
// {
//     int input = 13;
//     string output = convert_it(input);
//     cout << "binary of 13 is: " << output << endl;
//     bool ans = find_set(output, 0);
//     if (ans)
//     {
//         cout << "yes it is a set" << endl;
//     }
//     else
//     {
//         cout << "No it isn't a set" << endl;
//     }
// }

// -------------------------------------------------------------------------------------------------

// change integer to binary then
// Set the ith bit 1, if it already 1 then don't do anything
// then back to index

// #include <bits/stdc++.h>
// using namespace std;

// string convert_it(int n)
// {

//     if (n == 0) {
//         return "0";  // Special case for zero
//     }

//     string binary_str = "";
//     while (n > 0)
//     {
//         if (n % 2 == 1)
//         {
//             binary_str += '1';
//         }
//         else
//         {
//             binary_str += '0';
//         }

//         n /= 2;
//     }
//     reverse(binary_str.begin(), binary_str.end());
//     return binary_str;
// }

// string change_it(string xx, int k)
// {
//     if (k > 0 && k <= xx.size())
//     {
//        if(xx[k] == '1' || xx[k] == '0'){
//         xx[k] = '1';
//        }
//     }
//     return xx;
// }

// int convert_it_back(string binary_str)
// {
//     int digit = 0;
//     for (int i = 0; i < binary_str.size(); i++)
//     {
//         if(binary_str[i] == '1'){
//             digit+= pow(2,binary_str.size()-1-i);
//          }
//     }
//     return digit;
// }

// int main()
// {
//     int input = 13;
//     string output = convert_it(input);
//     cout << "binary version: " << output << endl;

//     string ans = change_it(output, 2);
//     cout << "After change: " << ans << endl;

//     int ans2 = convert_it_back(ans);
//     cout << "After change back to number: " << ans2 << endl;
// }

// -------------------------------------------------------------------------------------------------

// toggle ith bit using shift

// #include <bits/stdc++.h>
// using namespace std;

// int toggle_ith_bit(int n, int i)
// {
//     n = n ^ (1 << i);
//     return n;
// }

// int main()
// {
//     int input = 13;
//     int i = 2;

//     int toggled_input = toggle_ith_bit(input, i);
//     cout << "Number after toggling " << i << "th bit: " << toggled_input << endl;

//     return 0;
// }
// -------------------------------------------------------------------------------------------------

// toggle ith bit using shift
// 1 << i
// then do xor toggle that specific bit

// N = 13
// i = 2

// #include <bits/stdc++.h>
// using namespace std;

// Function to convert an integer to its binary string representation
// string convert_it(int n)
// {
//     if (n == 0)
//         return "0";

//     string binary_str = "";
//     while (n > 0)
//     {
//         if (n % 2 == 1)
//         {
//             binary_str += '1';
//         }
//         else
//         {
//             binary_str += '0';
//         }
//         n /= 2;
//     }
//     reverse(binary_str.begin(), binary_str.end());
//     return binary_str;
// }

// Function to toggle the ith bit of a number
// int toggle_ith_bit(int n, int i)
// {
// Create a ith_bit with only the ith bit set
// int ith_bit = 1 << i;
// Toggle the ith bit using XOR
//     n ^= ith_bit;
//     return n;
// }

// int main()
// {
//     int input = 13;
//     int i = 2;

// cout << "Original number: " << input << endl;
// string output = convert_it(input);
// cout << "Binary of " << input << " is: " << output << endl;

// int toggled_input = toggle_ith_bit(input, i);
// cout << "Number after toggling " << i << "th bit: " << toggled_input << endl;
// string toggled_output = convert_it(toggled_input);
// cout << "Binary after toggling " << i << "th bit: " << toggled_output << endl;

//     return 0;
// }

// ------------------------------------------------------------------------------------------------

// remove the last set

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int input = 40;
//     int ans = 40 & (40-1);
//     cout << ans;
// }

// ----------------------------------------------------------------------------------------------
// number is power of 2 or not?

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int input = 32;
//     int ans = 32 & (32-1);
//     cout << ans;
// }
// ----------------------------------------------------------------------------------------------
// count number of set bits

// #include<bits/stdc++.h>
// using namespace std;

// int check(int n){
//     int counter = 0;
//     while (n!=0)
//     {
//         n = n & (n - 1);
//         counter++;
//     }
//     return counter;
// }

// int main(){
//     int input = 321510;
//     int ans = check(input);
//     cout << ans;
// }

// --------------------------------------------------------------------------------------------

// Minimum Bit Flips to Convert Number

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int input = 10;
//     int goal = 7;

//     int num = input ^ goal;
//     int count = 0;

//     while (num) {
//         num = num & num - 1;
//         count++;
//     }

//     cout << count << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

vector<string> subsequences(string str)
{
    vector<string> v;
    // Total number of subsets (2^n)

    for (int nums = 1; nums < 1 << str.length(); nums++)
    {
        string s = "";
        for (int i = 0; i < str.length(); i++)
        {
            if (nums & (1 << i))
            {
                s += str[i];
            }
        }
        v.push_back(s);
    }
    return v;
}

int main()
{
    string input = "abc";
    vector<string> result = subsequences(input);

    for (const string &subseq : result)
    {
        cout << subseq << endl;
    }

    return 0;
}
