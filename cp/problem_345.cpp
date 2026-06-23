
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
#define print(x) cout<<x<<"\n";

#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define __ return;

#define fr(i,a,n) for(int i = a; i < n; i++)
#define fr1(i,a,n) for(int i = 1; i <= n; i++)
#define rev(i,a,n) for(int i = n-1; i >= a; i--)

// "all my victories belong to god and all my loses are mine alone" 
// ------------------------- SOLVE -------------------------- 


void solve() {
    long long a, b, x;
    cin >> a >> b >> x;
    
    vector<long long> seq_a;
    vector<long long> seq_b;
    
    // 1. Generate division sequence for a
    long long temp = a;
    seq_a.push_back(temp);
    while (temp > 0) {
        temp /= x;
        seq_a.push_back(temp);
    }
    
    // 2. Generate division sequence for b
    temp = b;
    seq_b.push_back(temp);
    while (temp > 0) {
        temp /= x;
        seq_b.push_back(temp);
    }
    
    // 3. Compare all possible intersection points
    long long min_ops = -1;
    for (size_t i = 0; i < seq_a.size(); ++i) {
        for (size_t j = 0; j < seq_b.size(); ++j) {
            
            long long diff = seq_a[i] > seq_b[j] ? seq_a[i] - seq_b[j] : seq_b[j] - seq_a[i];
            long long current_ops = i + j + diff;
            
            if (min_ops == -1 || current_ops < min_ops) {
                min_ops = current_ops;
            }
        }
    }
    
    // 4. Output the optimal path length
    cout << min_ops << "\n";
}
int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}