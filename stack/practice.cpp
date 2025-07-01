// Q : Valid Parentheses in an Expression?

// #include <bits/stdc++.h>
// using namespace std;

// bool isbalance(const string &s)
// {
//     stack<char> st;

//     for (int i = 0; i < s.length(); i++)
//     {
//         if(s[i] == '(' || s[i] == '{' || s[i] == '['){
//             st.push(s[i]);
//         } else {
//             if (!st.empty() &&
//                 ((st.top() == '(' && s[i] == ')') ||
//                  (st.top() == '{' && s[i] == '}') ||
//                  (st.top() == '[' && s[i] == ']'))) {

//                 st.pop();
//             } else {
//                 return false;
//             }
//         }
//     }
//     return st.empty();
// }

// int main()
// {
//     string s = "{[()]}";

//     if (isbalance(s))
//     {
//         cout << "true";
//     }
//     else
//     {
//         cout << "false";
//     }

//     return 0;
// }

// Q: Reverse a String using Stack ?

// #include<bits/stdc++.h>
// using namespace std;

// string rev(string s){

//     stack<char> st;
//     string str = "";
//     for (int i = 0; i < s.length(); i++)
//     {
//         st.push(s[i]);
//     }

//     while (!st.empty())
//     {
//         str += st.top();
//         st.pop();
//     }
//     return str;
// }

// int main(){
//     string s = "nice";
//     cout << rev(s) << endl;
//     return 0;
// }

// Q : Delete middle element of a stack ?

// #include <bits/stdc++.h>
// using namespace std;

// // Helper function to delete middle element
// void deleteMiddle(stack<int>& st, int curr, int mid) {
//     if (curr == mid) {
//         st.pop();
//         return;
//     }
//     int temp = st.top();
//     st.pop();
//     deleteMiddle(st, curr + 1, mid);
//     st.push(temp);
// }

// void deleteMid(stack<int>& st) {
//     int n = st.size();
//     int mid = n / 2;
//     deleteMiddle(st, 0, mid);
// }

// int main()
// {
//     stack<int> st;
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n; i++) {
//         st.push(arr[i]);
//     }

//     deleteMid(st);

//     // Print stack from top to bottom
//     while (!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;

//     return 0;
// }

// Q: Reverse Individual words

// #include <bits/stdc++.h>
// using namespace std;

// string rev_words(string s)
// {
//     stack<char> st;
//     string res = "";

//     for (int i = 0; i < s.length(); i++)
//     {
//         if(s[i] != ' '){
//             st.push(s[i]);
//         } else {
//             while (!st.empty())
//             {
//                 res += st.top();
//                 st.pop();
//             }
//             res += ' ';
//         }
//     }

//     // For the last word
//     while (!st.empty())
//     {
//         res += st.top();
//         st.pop();
//     }
//     return res;
// }

// int main()
// {
//     string str = "Hello World";
//     cout << rev_words(str) << endl;

//     return 0;
// }

// Q: Next Greater Element (NGE) for every element in given Array

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Approach 1

    // vector<int> Vec = {1, 3, 2, 4};
    // vector<int> res = {};
    // for (int i = 0; i < Vec.size(); i++)
    // {
    //     bool found = false;
    //     for (int j = i + 1; j < Vec.size(); j++)
    //     {
    //         if (Vec[j] > Vec[i])
    //         {
    //             res.push_back(Vec[j]);
    //             found = true;
    //             break;
    //         }
    //     }
    //     if (!found)
    //     {
    //         res.push_back(-1);
    //     }
    // }

    // Approach 2

    vector<int> Vec = {1, 3, 2, 4};
    vector<int> res(Vec.size(), -1);
    stack<int> st;

    for (int i = Vec.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= Vec[i])
        {
            st.pop();
        }
        if (!st.empty())
        {
            res[i] = st.top();
        }
        st.push(Vec[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}