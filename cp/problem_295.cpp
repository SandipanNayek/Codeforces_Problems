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

#define fr(i,n) for(int i = 0; i < n; i++)
#define fr1(i,n) for(int i = 1; i <= n; i++)
#define rev(i,n) for(int i = n-1; i >= 0; i--)


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
    int n;
    cin>>n;
    vi v(n);
    fr(i,n){
        cin>>v[i];
    }
    unordered_map<int,int>mp;
    for(auto it : v){
        mp[it]++;
    }
    priority_queue<int>pq;
    for(auto it : mp){
        pq.push(it.second);
    }
    int total=0;
    int last=0;
    if(!pq.empty()){
        total+=pq.top();
        last=pq.top();
        pq.pop();
    }
    while(!pq.empty()){
        if(last==pq.top()){
            total+=pq.top()-1;
            last=pq.top()-1;
            pq.pop();
        }
        else if(last > pq.top()){
            total+=pq.top();
            last=pq.top();
            pq.pop();
        }
        else{
            total+=last-1;
            last=last-1;
            pq.pop();
        }
        if( last <= 0){
            break;
        }
        
    }
    cout<<total<<"\n";
}
int main() {
     //Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}






 