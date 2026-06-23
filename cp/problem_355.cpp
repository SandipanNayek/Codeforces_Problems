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
#define i128 _int128
#define get(x) cin>>x
#define print(x) cout<<x<<"\n";

#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define __ return;

#define fr(i,a,n) for(int i = a; i < n; i++)
#define fr1(i,a,n) for(int i = 1; i <= n; i++)
#define rev(i,a,n) for(int i = n-1; i >= a; i--)

void solve() {
    int n ;
    cin>>n;
    vi a(n);
    vi b(n);
    fr(i,0,n){
        get(a[i]);
    }
    fr(i,0,n){
        get(b[i]);
    }
    if(is_sorted(all(a))){
        cout<<"YES"<<"\n";
        return;
    }
    bool allsame=true;
    for(int i=1;i<n;i++){
        if(b[i-1] != b[i]){
            allsame=false;
            break;
        }
    }
    if(allsame){
        for(int i=1;i<n;i++){
            if(a[i-1] > a[i]){
                no;
                return;
            }
        }
    }
    yes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    t=1;
    cin >> t;
    
    while (t--) solve();

    return 0;
}