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
#define i128 _int128
#define get(x) cin>>x
#define print(x) cout<<x<<"\n";

#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define __ return;

#define fr(i,a,n) for(int i = a; i < n; i++)
#define fr1(i,a,n) for(int i = 1; i <= n; i++)
#define rev(i,a,n) for(int i = n-1; i >= a; i--)

void solve() {
    int n, k;
    cin >> n >> k;

    vi cnt(n + 1, 0);

    fr(i,0,n) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    vector<bool> dp(n + 1, false);

    int cur = 0;

    rev(v,1,n + 1) {
        if (cnt[v]) {
            if (cur > 0) {
                dp[v] = false;
            } else {
                dp[v] = (cnt[v] & 1);
            }
        }

        if (cnt[v] && dp[v]) cur++;

        if (v + k <= n) {
            if (cnt[v + k] && dp[v + k]) cur--;
        }
    }

    bool ok = false;

    fr1(i,1,n) {
        if (cnt[i] && !dp[i]) {
            ok = true;
            break;
        }
    }

    if (ok) yes
    else no
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}