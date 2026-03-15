#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(const string &s, char ch) {
    vector<int> pos;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == ch) pos.push_back(i);
    }
    int m = pos.size();
    if (m <= 1) return 0; // already grouped

    // Find median
    int mid = m / 2;
    ll swaps = 0;
    for (int i = 0; i < m; i++) {
        swaps += abs(pos[i] - (pos[mid] + i - mid));
    }
    return swaps;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        ll ans = min(calc(s, 'a'), calc(s, 'b'));
        cout << ans << "\n";
    }
}
