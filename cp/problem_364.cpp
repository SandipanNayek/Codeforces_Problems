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
    cin>>n;
    int k;
    cin>>k;
    int cnt  = 1;
    vector<int>ans;
    for(int i=2;i*i<=n;i++){
        if(cnt >= k) break;
        while(n % i ==0){
          if(cnt<k){
            ans.pb(i);
            n/=i;
            cnt++;
          }
          else{
            break;
          }
        }
    }
    if(n !=1){
        ans.pb(n);
        cnt++;
    }
    if(ans.size() < k){
        cout<<"-1"<<"\n";
        return;
    }
    for(auto it : ans){
        cout<<it<<" "; 
    }

    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    t = 1;
    //cin >> t;

    while(t--) solve();

    return 0;
}