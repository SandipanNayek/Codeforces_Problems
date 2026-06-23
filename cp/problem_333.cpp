
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

// "all my victories belong to god and all my loses are mine alone" 
// ------------------------- SOLVE -------------------------- 

void solve(){
    ll n,k,x;
    get(n);
    get(k);
    get(x);

    vii v(n);
    fr(i,0,n){
        get(v[i]);
    }
    sort(all(v));
    vii diff;
    fr(i,1,n){
        if(v[i] - v[i-1] > x){
            diff.pb(v[i]-v[i-1]);
        }
    }
    sort(all(diff));
    ll ans = diff.size() +1;

    for(int i=0;i<diff.size();i++){
        ll fills= (diff[i] -1) /x;
        if(fills > k) {
            break;
        }
        k-=fills;
        ans--;
    }
    print(ans);

    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    int t;
    t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}






 