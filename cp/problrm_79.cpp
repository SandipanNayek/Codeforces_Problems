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

void solve() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a != 0) {
        double d = (b * b) - (4 * a * c);

        if (d < 0) {
            cout << 0 << "\n"; 
            return;
        }
        else if(d==0){
            double x = -b  / (2 * a);
            cout<< 1 << "\n";
            cout << fixed << setprecision(8) << x << "\n";
            return;
        }
         else { // d >= 0
            double x = (-b + sqrt(d)) / (2 * a);
            double y = (-b - sqrt(d)) / (2 * a);

            double maxval = max(x, y);
            double minval = min(x, y);

            cout << 2 << "\n";
            cout << fixed << setprecision(8) << minval << "\n";
            cout << fixed << setprecision(8) << maxval << "\n";
            return;
        }
    } else { // a = 0
        if (b != 0) {
            double x = -(c / b);
            cout << 1 << "\n";
            cout << fixed << setprecision(8) << x << "\n";
            return;
        }
        else{  // b=0
          if(c==0){
            cout<<-1<<"\n";
            return;
          }
          else{
            cout<<0<<"\n";
            return;
          }
        } 
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    //cin >> t;        //  If problem has only one test case, just comment this line
    while (t--) {
        solve();
    }
    return 0;
}
