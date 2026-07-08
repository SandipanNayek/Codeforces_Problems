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
    int n;
    cin>>n;
    vi v(n);
    fr(i,0,n){
        get(v[i]);
    }
    int s =0;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int cnt  = 0;
    for(auto it : v){
        if(it % 2 == 1 && it >0){
         s+=it;
         cnt++;
         mini = min(mini , it);
        }
        else if(abs(it % 2) == 1 && it <0){
            maxi = max(maxi , it);
        }
        else if(it % 2 == 0 && it>0){
            s+=it;
        }
    }
    
    if(cnt == 0){
        print(s + maxi);
    }
    else if(s % 2==0){
        print(s + max(-mini , maxi));
    }
    else if( s % 2 == 1){
        print(s);
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    t = 1;
    //cin >> t;

    while(t--) solve();

    return 0;
}