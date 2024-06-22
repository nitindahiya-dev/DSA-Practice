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

// -------------------------------------------------------------------------------------

// Print linearly n to 1..by backtrack!!

#include <bits/stdc++.h>
using namespace std;

void fn(int count, int n){
    if(count > n) return;
    fn(count+1, n);
    cout << count << " ";
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    fn(1, n);
    return 0;
}