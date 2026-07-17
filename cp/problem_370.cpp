#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vii vector<ll>
#define i128 __int128
#define get(x) cin >> x
#define print(x) cout << x << "\n"

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define __ return

#define fr(i,a,n) for(int i = a; i < n; i++)
#define fr1(i,a,n) for(int i = 1; i <= n; i++)
#define rev(i,a,n) for(int i = n-1; i >= a; i--)

void solve() {
    ll n,c;
    cin>>n>>c;
    vii v(n);
    fr(i,0,n){
        cin>>v[i];
    }
    ll i=0;
    ll j =n-1;
    sort(all(v));
    ll sum  = 0;
    while(i < j){
        
     if((v[j] - c) >= (v[i]+v[j]) - (2*c)){
        sum+=v[j] - c;
        j--;
        i++;
     }
     else{
        sum+=v[j] - c;  
        j--;
     }
    }
    if(i == j){
        sum+=v[i] - c;
    }
    cout<<sum<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}