
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

void solve() {
    int n,m,x;
    get(n);
    get(m);
    vi v(n);
    fr(i,0,n){
        get(v[i]);
    }
    cin>>x;
    bool flag=false;
    int prev=min(v[0] , x-v[0]);
    fr(i,1,n){
        if(prev > v[i]){
           int val = x-v[i];
           if(val >= prev){
            prev=val;
           }
           else{
            no;
            __;
           }
        }
        else{
            int best = min(v[i] , x-v[i]);
            if(best >= prev){
                prev=best;
            }
            else{
                prev = max(v[i] , x-v[i]);
            }
        }
    }
    yes;
}
int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}