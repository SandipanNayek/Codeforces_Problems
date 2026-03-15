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
 
 #include <bits/stdc++.h>
using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<long long> v(n + 1);  // 1-based indexing
//     for (int i = 1; i <= n; i++) {
//         cin >> v[i];
//     }

//     long long maxdiff = 0;

//     for (int k = 1; k <= n; k++) {
//         if (n % k == 0) {   
//             long long maxsum = LLONG_MIN;
//             long long minsum = LLONG_MAX;

//             int left = 1;
//             while (left <= n) {
//                 long long sum = 0;
//                 int right = left + k - 1;
//                 while (left <= right) {
//                     sum += v[left];   
//                     left++;
//                 }
//                 maxsum = max(maxsum, sum);
//                 minsum = min(minsum, sum);
//             }
//             maxdiff = max(maxdiff, maxsum - minsum);
//         }
//     }

//     cout << maxdiff << "\n";
// }

void solve(){
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
     int maxdiff=0;
    for(int i=1;i<=n;i++){
       if( n % i ==0){ 
         int k= n / i;    // k= 8 / 2 = 4
             int maxsum=INT_MIN;
             int minsum=INT_MAX;    
             int left=1;        
             while(left<=n){
                int sum=0;
                int right=left+k-1;
                while(left<=right){
                    sum=sum+v[left];
                    left++;
                 }
                 maxsum=max(sum,maxsum);
                 minsum=min(sum,minsum);
             }
             int currentdiff=abs(maxsum-minsum);
             maxdiff=max(maxdiff,currentdiff);
       }
    }
    cout<<maxdiff<<"\n";
} 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
