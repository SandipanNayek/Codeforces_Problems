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
  ll n;
  cin >> n;

  vi a(n), b(n);
  fr(i,0,n) cin >> a[i];
  fr(i,0,n) cin >> b[i];

  vector<pair<ll,ll>> v;
  for(int i = 0; i < n; i++){
    v.push_back({a[i] + b[i], i});
  }

  sort(v.rbegin(), v.rend());

  bool flag = true;
  ll cnt = 0;

  for(int i = 0; i < n; i++){
    if(flag){
       cnt += a[v[i].second] - 1;
       flag = false;
    }
    else{
        cnt -= b[v[i].second] - 1;
        flag = true;
    }
  }

  cout << cnt << "\n";
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






 