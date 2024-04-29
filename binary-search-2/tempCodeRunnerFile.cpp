
#include<iostream>
using namespace std;

int nthroot(int n, int m) {
    //Use linear search on the answer space:
    for (int i = 1; i <= m; i++) {
        long long val = func(i, n);
        if (val == m * 1ll) return i;
        else if (val > m * 1ll) break;
    }
    return -1;
}
int main (){
    int n = 3;
    int m = 4;
    int nth = nthroot(n,m);
    cout << nth;
}