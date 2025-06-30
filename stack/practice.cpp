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

#include <bits/stdc++.h>
using namespace std;

// Helper function to delete middle element
void deleteMiddle(stack<int>& st, int curr, int mid) {
    if (curr == mid) {
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    deleteMiddle(st, curr + 1, mid);
    st.push(temp);
}

void deleteMid(stack<int>& st) {
    int n = st.size();
    int mid = n / 2;
    deleteMiddle(st, 0, mid);
}

int main()
{
    stack<int> st;
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        st.push(arr[i]);
    }

    deleteMid(st);

    // Print stack from top to bottom
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}