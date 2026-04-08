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
 

// "all my victories belong to god and all my loses are mine alone"
 
// ------------------------- SOLVE -------------------------- 

void solve(){
  vi v(7);
  fr(i,0,7){
    cin>>v[i];
  }
  sort(rall(v));
  int sum=0;
  sum+=v[0];
  fr(i,1,7){
    sum+=-v[i];
  }
  cout<<sum<<"\n";
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






 