#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        cout << 2 << "\n";  

        
        int a = n, b = n - 1;
        cout << a << " " << b << "\n";
        int cur = (a + b + 1) / 2;  

        for (int i = n - 2; i >= 1; i--) {
            cout << cur << " " << i << "\n";
            cur = (cur + i + 1) / 2; 
        }
    }
    return 0;
}