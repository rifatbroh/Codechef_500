#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a;
        cin >> a;
        int ans = a * 4;
        if (ans <= 1000)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
