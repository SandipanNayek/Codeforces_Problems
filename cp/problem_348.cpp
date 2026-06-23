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
    int n ,k;
    cin>>n>>k;
    vi v(n+1);
    fr1(i,1,n){
        get(v[i]);
    }
    vector<vector<int>>pos(k+1);
    fr1(i , 1 , n){
        pos[v[i]].pb(i);
    }
    int ans =INT_MAX;
    for(int color = 1; color<=k; color++){
        vi gaps;
        int prev =0;
        for(auto it : pos[color]){
            gaps.pb(it - prev -1);
            prev = it;
        }
        gaps.pb(n - prev);

        int maxi1 =0;
        int maxi2 =0;
        for(auto it : gaps){
            if(it > maxi1){
                maxi2 = maxi1;
                maxi1 = it;
            }
            else if( it > maxi2){
                maxi2 = it;
            }
        }
        ans = min(ans, max(maxi1 / 2 , maxi2));
    }
    cout<<ans<<"\n";


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    t=1;
    cin >> t;
    
    while (t--) solve();

    return 0;
}