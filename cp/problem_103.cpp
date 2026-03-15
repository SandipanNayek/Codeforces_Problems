#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end()); 
        vector<ll> prefix(n + 1, 0); 
        for (int i = 0; i < n; i++) prefix[i + 1] = prefix[i] + a[i];

        ll ans = 0;
        
        for (int x = 0; x <= k; x++) {
            if (2 * x > n) break; 
            int remove_max = k - x;
            if (remove_max > n - 2 * x) continue; 
            ll sum_remaining = prefix[n - remove_max] - prefix[2 * x];
            ans = max(ans, sum_remaining);
        }

        cout << ans << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}
