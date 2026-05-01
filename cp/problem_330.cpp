
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

#define fr(i,a,n) for(int i = a; i < n; i++)
#define fr1(i,a,n) for(int i = 1; i <= n; i++)
#define rev(i,a,n) for(int i = n-1; i >= a; i--)

// "all my victories belong to god and all my loses are mine alone" 
// ------------------------- SOLVE -------------------------- 

void solve(){
    int n ;
    cin>>n;
    vi v(n);
    fr (i , 0 ,n){
        get(v[i]);
    }
    fr(i,1,n){
        if(!(abs(v[i] - v[i-1]) == 7 || abs(v[i] - v[i-1]) == 5)){
            cout<<"NO"<<"\n";
            return;
        }
        
    }
    cout<<"YES"<<'\n';

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}






 