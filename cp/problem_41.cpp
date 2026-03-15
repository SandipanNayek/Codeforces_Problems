#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int odd = 0, even = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] % 2 == 0) even++;
            else odd++;
        }
        if (odd > 0 && even > 0) {
            cout << "YES\n";
        } else if (odd > 0 && n % 2 == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
