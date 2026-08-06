#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    if (n == 1) {
        int x, y;
        cin >> x >> y;
        cout << 1 << '\n';
        return;
    }

    vector<int> x(n), y(n), xs(n), ys(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        xs[i] = x[i];
        ys[i] = y[i];
    }

    sort(xs.begin(), xs.end());
    sort(ys.begin(), ys.end());

    ll ans = 1LL * (xs[n - 1] - xs[0] + 1) * (ys[n - 1] - ys[0] + 1);

    for (int i = 0; i < n; i++) {

        int xl = (x[i] == xs[0]) ? xs[1] : xs[0];
        int xr = (x[i] == xs[n - 1]) ? xs[n - 2] : xs[n - 1];

        int yl = (y[i] == ys[0]) ? ys[1] : ys[0];
        int yr = (y[i] == ys[n - 1]) ? ys[n - 2] : ys[n - 1];

        ll h = xr - xl + 1;
        ll w = yr - yl + 1;

        ll area = h * w;

        if (area > n - 1) {
            ans = min(ans, area);
        } else {
            ans = min(ans, min((h + 1) * w, h * (w + 1)));
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}