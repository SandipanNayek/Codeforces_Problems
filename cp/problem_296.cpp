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

#define fr(i,a,n) for(int i = a; i < n; i++)
#define fr1(i,a,n) for(int i = 1; i <= n; i++)
#define rev(i,a,n) for(int i = n-1; i >= a; i--)


// --- Constants ---
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD =  998244353;
 
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
 
ll modinv(ll a, ll m = MOD) { 
    return modpow(a, m - 2, m);
}


 

// "all my victories belong to god and all my loses are mine alone"
 
// ------------------------- SOLVE -------------------------- 
    

void solve(){
    int n,q;
    cin>>n>>q;
   deque<int>dq;
   int maxi=-1e9;
   vector<pair<int,int>>v;
   v.pb({0,0});
   for(int i=0;i<n;i++){
     int x;
     cin>>x;
     maxi=max(maxi,x);
     dq.pb(x);
   }
   int cnt=1;
   while(dq[0]!=maxi){
    cnt++;
    int a =dq[0];
    dq.pop_front();
    int b=dq[0];
    dq.pop_front();
    v.pb({a,b});
    dq.push_back(min(a,b));
    dq.push_front(max(a,b));
   }

   while(q--){
    ll x;
    cin>>x;
    if( x < cnt){
        cout<<v[x].first<<" "<<v[x].second<<"\n";
    }
    else{
        cout<<maxi<<" "<<dq[1 + ((x-cnt) % (n-1))]<<"\n";
    }
   }


    
}
int main() {
     //Fast I/O
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






 