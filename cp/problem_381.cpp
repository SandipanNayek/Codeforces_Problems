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

#define fr(i,a,n) for(int i = a; i < n; i++)
#define fr1(i,a,n) for(int i = 1; i <= n; i++)
#define rev(i,a,n) for(int i = n-1; i >= a; i--)

void solve() {
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    vi e1, o1, e2, o2;

    fr(i,0,n){
        if(s[i] == '1'){
            if(i & 1) o1.pb(i / 2);
            else e1.pb(i / 2);
        }

        if(t[i] == '1'){
            if(i & 1) o2.pb(i / 2);
            else e2.pb(i / 2);
        }
    }

    if(e1.size() != e2.size() || o1.size() != o2.size()){
        print(-1);
        return;
    }

    ll ans = 0;

    fr(i,0,e1.size()) ans += abs(e1[i] - e2[i]);
    fr(i,0,o1.size()) ans += abs(o1[i] - o2[i]);

    print(ans);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while(tc--) solve();

    return 0;
}