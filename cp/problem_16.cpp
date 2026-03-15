#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
 
        long long n = stoll(s);  // convert year string → number
 
        long long lo = 0, hi = 100000; // since sqrt(9999) < 10000
        long long ans = -1;
 
        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            long long sq = mid * mid;
 
            if (sq == n) {
                ans = mid;
                break;
            } else if (sq > n) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
 
        if (ans == -1) {
            cout << -1 << "\n";
        } else {
            cout << ans / 2 << " " << ans - ans / 2 << "\n";
        }
    }
    return 0;
}
