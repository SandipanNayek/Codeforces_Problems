#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a1, k;
        cin >> a1 >> k;

        long long ans = a1;

        for (long long i = 1; i < k; i++) {
            long long temp = ans;
            int mn = 9, mx = 0;

            // compute min and max digit
            while (temp > 0) {
                int d = temp % 10;
                mn = min(mn, d);
                mx = max(mx, d);
                temp /= 10;
            }

            if (mn == 0) break; // sequence freezes
            ans = ans + 1LL * mn * mx;
        }

        cout << ans << "\n";
    }
}
