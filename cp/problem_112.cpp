// #include <bits/stdc++.h>
// using namespace std;
 
// // --- Type shortcuts ---
// using ll = long long;
// using ull = unsigned long long; 
// using ld = long double;
// using pii = pair<int,int>;
// using pll = pair<ll,ll>;
 
// // --- Macros ---
// #define all(x) (x).begin(), (x).end()
// #define pb push_back
// #define ff first
// #define ss second
 
// // --- Constants ---
// const int INF = 1e9;
// const ll LINF = 1e18;
// const int MOD = 1e9 + 7; // Sometimes 998244353
 
// // --- Utility functions ---
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
 
// ll modpow(ll a, ll b, ll m = MOD) {
//     ll res = 1;
//     while (b > 0) {
//         if (b & 1) res = (res * a) % m;
//         a = (a * a) % m;
//         b >>= 1;
//     }
//     return res;
// }
 
// ll modinv(ll a, ll m = MOD) { // Format (m must be prime)
//     return modpow(a, m - 2, m);
// }

// // "all my victories belong to god and all my loses are mine alone"
// void solve() {
//     int n;cin>>n;
//     string s;cin>>s;
//     vector<int> res(n);
//     for (int i=0;i<n;i++) {
//         if (s[i]=='0') {
//             int j=i;
//             while(j<n&&s[j]=='0') j++;
//             if (j-i==1) {
//                 cout<<"NO\n";
//                 return;
//             }
//             for (int k=i,cur=j-1;k<j;k++,cur--) {
//                 res[k]=cur;
//             }
//             i=j-1;
//         } else res[i]=i;
//     }
//     cout<<"YES\n";
//     for (int x:res) cout<<x+1<<" ";cout<<endl;
    
          
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int t = 1;
//     cin >> t;        //  If problem has only one test case, just comment this line
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string &s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // If the string itself is a palindrome, remove empty subsequence
    if (isPalindrome(s)) {
        cout << 0 << "\n";
        return;
    }

    // Try removing a single character to make a palindrome
    for (int i = 0; i < n; i++) {
        string t = s.substr(0, i) + s.substr(i + 1);
        if (isPalindrome(t)) {
            cout << 1 << "\n" << i + 1 << "\n"; // 1-based index
            return;
        }
    }

    // Try removing the first increasing sequence of 0s then 1s
    vector<int> p;
    char last = '0' - 1; // smaller than '0'
    for (int i = 0; i < n; i++) {
        if (s[i] >= last) {
            p.push_back(i + 1); // store index (1-based)
            last = s[i];
        }
    }

    // Output the subsequence
    cout << p.size() << "\n";
    for (int idx : p)
        cout << idx << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

