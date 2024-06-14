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
