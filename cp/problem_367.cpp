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
    ll n;
    ll k;
    cin>>n>>k;
    ll odd = n-(k-1);
    if(odd > 0 && odd % 2!=0){
        yes;
        for(int i=1;i<=k-1;i++){
            cout<<1<<" ";
        }
        cout<<odd<<"\n";
        return;
    }
    ll even = n-2*(k-1);
     if(even > 0 && even % 2==0){
        yes;
        for(int i=1;i<=k-1;i++){
            cout<<2<<" ";
        }
        cout<<even<<"\n";
        return;
    }
    else{
        no;
        return;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}