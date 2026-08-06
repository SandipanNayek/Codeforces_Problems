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
    int n, m;
    cin >> n >> m;

    vi a(n), b(m);

    fr(i,0,n) cin >> a[i];
    fr(i,0,m) cin >> b[i];

    if(n < 2 * m){
        no;
        return;
    }

    sort(all(a));
    sort(all(b));

    int l = 0;
    int r = m;

    bool ok = true;

    fr(i,0,m){

        if(a[i] > b[i]){
            ok = false;
            break;
        }

        while(r < n && a[r] < b[i]){
            r++;
        }

        if(r == n){
            ok = false;
            break;
        }

        r++;
    }

    if(ok) yes;
    else no;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}