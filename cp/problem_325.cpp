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

// "all my victories belong to god and all my loses are mine alone" 
// ------------------------- SOLVE -------------------------- 
void solve() {
    int n;
    cin >> n;
    string r1, r2;
    cin >> r1 >> r2;

    int m = 0;
    
    
    for (int i = 0; i < n; i++) {
        if (r1[i] != r2[i]) {
            m++;
        }
    }
    
    int ans = m;
    
   
    for (int i = 0; i < n - 1; i++) {
        if (r1[i] != r2[i]) { 
            pro
            if (r1[i] == r1[i+1] && r2[i] == r2[i+1]) { 
                ans -= 2; 
                i++;      
            }
        }
    }
    
    cout << ans << "\n";
}
int main() {
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






 