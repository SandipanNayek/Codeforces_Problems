#include <bits/stdc++.h>
using namespace std;
 
// --- Type shortcuts ---
using ll = long long;
using ull = unsigned long long; 
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
 
// --- Macros ---
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
 
// --- Constants ---
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7; // Sometimes 998244353
 
// --- Utility functions ---
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
 
ll modpow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}
 
ll modinv(ll a, ll m = MOD) { // Format (m must be prime)
    return modpow(a, m - 2, m);
}

// "all my victories belong to god and all my loses are mine alone"

void solve() {
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int neg = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) neg++;
    }

    sort(v.begin(), v.end());
    int i = 0;
    int j = neg + i;
    int temp = j;
    long long sum = 0;

    if (abs(v[i]) < abs(v[j])) {  // avoid out of bound
        while (i <= n - 1) {
            sum += v[i];
            i++;
        }
        cout << sum << "\n";
        return;
    } 
    else {   // abs(v[i]) >= abs(v[j])
        if (neg == n) {
            if (n % 2 == 0) { // even count: all positive
                while (i < n) {
                    sum += abs(v[i]);
                    i++;
                }
                cout << sum << "\n";
                return;
            } else { // odd count: one stays negative
                while (i < n) {
                    sum += abs(v[i]);
                    i++;
                }
                cout << sum - 2 * abs(v[0]) << "\n"; // subtract smallest abs
                return;
            }
        } 
        else {
            while (abs(v[i]) >= abs(v[j ]) && j <= n - 1 && i < temp) {
                v[i] = abs(v[i]);
                v[j] = -abs(v[j]);
                i++;
                j++;
            }

            sum = 0;
            for (int k = 0; k < n; k++) {
                sum += v[k];
            }
            cout << sum << "\n";
            return;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;        //  If problem has only one test case, just comment this line
    while (t--) {
        solve();
    }
    return 0;
}




