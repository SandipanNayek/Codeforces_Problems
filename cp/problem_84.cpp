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
#define pb push_back
#define ff first
#define ss second
 
// --- Constants ---
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7; // Sometimes 998244353
 
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
 
ll modinv(ll a, ll m = MOD) { // Format (m must be prime)
    return modpow(a, m - 2, m);
}

void solve() {
 int n;
 cin>>n;
 string s;
 cin>>s;
 int maxcount=0;
 int mincount=0;
 int maxele;
 typedef pair<int , char>pi;
 unordered_map<char,int>mp;
 for(auto & ele : s){
    mp[ele]++;
 }
 priority_queue<pi>pq;
 for( auto & c : mp){
  pq.push({c.second,c.first});
 }
 
 maxele=pq.top().second;
  maxcount=pq.top().first;
  pq.pop();
  if(!pq.empty()){
  mincount=pq.top().first;
 }
 int l=0;
 int r=1;
 int count=0;
 int diff=maxcount-mincount;
 int temp=0;
 if(diff==0){
    cout<<0<<"\n";
    return;
 }
 while( r < n){
    while(r < s.size() && s[l]==s[r] && maxele==s[l] ){
    count=temp + (r-l+1);
    r++;
    //l++;
   if(diff==count){
        if(s.size()-count > 1){
            cout<<count<<"\n";
            return;
        }
        else{
            cout<<-1<<"\n";
            return;
        }
   }
 }
 temp=count;
 l=r;
 r=l+1;
}
cout<<-1<<"\n";
return;

                      // wrong code fails 2nd  test cases nonocrap string
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;        //  If problem has only one test case, just comment this line
    while (t--) {
        solve();
    }
    return 0;
}


