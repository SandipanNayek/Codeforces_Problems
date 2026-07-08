#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vii vector<ll>
#define i128 __int128
#define get(x) cin >> x
#define print(x) cout << x << "\n"

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define __ return

#define fr(i,a,n) for(int i = a; i < n; i++)
#define fr1(i,a,n) for(int i = 1; i <= n; i++)
#define rev(i,a,n) for(int i = n-1; i >= a; i--)

void solve() {
    int n;
    get(n);

    vi a(n);
    fr(i,0,n) get(a[i]);

    vi p(n), q(n);

    int x = 0, y = 0;
    fr(i,0,n){
        x += (a[i] == 1 ? 1 : -1);
        y += (a[i] <= 2 ? 1 : -1);
        p[i] = x;
        q[i] = y;
    }

    int mn = 1e9;
    bool ok = false;

    fr(j,1,n-1){
        int i = j - 1;

        if(p[i] >= 0)
            mn = min(mn, q[i]);

        if(q[j] >= mn){
            ok = true;
            break;
        }
    }

    if(ok) yes;
    else no;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    t = 1;
    cin >> t;

    while(t--) solve();

    return 0;
}