
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
        vi a(n);
        fr (i , 0, n) cin >> a[i];
        
        sort(all(a));
        
        int lo = 0, hi = n;
        int maxi = 0;
        
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            
            vector<bool> tm(mid, false);
            vector<bool> eu(n, false);
            
            
            fr (i ,0,n) {
                if (a[i] < mid && !tm[a[i]]) {
                    tm[a[i]] = true;
                    eu[i] = true;
                }
            }
            
            vi ut;
            fr (v,0,mid) {
                if (!tm[v]) {
                    ut.push_back(v);
                }
            }
            
            int pt = 0;
            bool pos = true;
            
           
            for (int tv : ut) {
                int req = 2 * tv + 1;
                while (pt < n && (eu[pt] || a[pt] < req)) {
                    pt++;
                }
                
                if (pt == n) {
                    pos = false;
                    break;
                }
                pt++;
            }
            
            if (pos) {
                maxi = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        
        cout << maxi << "\n";
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






 