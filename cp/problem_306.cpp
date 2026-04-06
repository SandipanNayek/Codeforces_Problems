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
 
const int MAX_LIMIT = 200000;
vector<long long> primes;
void sieve() {
    vector<bool> is_prime(MAX_LIMIT + 1, true);
    is_prime[0] = is_prime[1] = false;
    
    for (int p = 2; p * p <= MAX_LIMIT; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= MAX_LIMIT; i += p) {
                is_prime[i] = false;
            }
        }
    }
    for (int p = 2; p <= MAX_LIMIT; p++) {
        if (is_prime[p]) {
            primes.push_back(p);
        }
    }
}
// "all my victories belong to god and all my loses are mine alone"
 
// ------------------------- SOLVE -------------------------- 

void solve() {
    int n;
    cin >> n;
    vi v(n);
    fr(i,0,n){
        cin>>v[i];
    }
    bool flag=true;
    int l=0;
    int r=n-1;
    string s="";
    while(l <= r){
        if(flag){
             if(v[l] < v[r]){
                s+='L';
                l++;
             }
             else{
                s+='R';
                r--;
             }
        }
        else{
            if(v[l] > v[r]){
                s+='L';
                l++;
             }
             else{
                s+='R';
                r--;
             }
        }
        flag=!flag;
    }
    cout<<s<<"\n";
}
int main() {
     //Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}






 