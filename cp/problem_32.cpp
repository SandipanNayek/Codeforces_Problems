#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a;

// check if we can make array non-decreasing with at most x operations
bool can(int x) {
    int prev = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] + x < m) {
            // range = [a[i], a[i] + x]
            if (a[i] + x < prev) return false; 
            prev = max(prev, a[i]);
        } else {
            // wrap-around case: [a[i], m-1] ∪ [0, (a[i] + x) % m]
            int limit = (a[i] + x) % m;
            if (prev > limit && prev < a[i]) return false;
            // else prev is still valid, do nothing
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int lo = 0, hi = m - 1, ans = m;
    while (lo <= hi) {
        int mid = (lo + hi) >> 1;
        if (can(mid)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << ans << "\n";
    return 0;
}