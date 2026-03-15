// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
 
// using namespace std;
 
// int get_parity(long long x) {
//     return abs(x % 2) ;
// }
 
// void solve() {
//     int n;
//     cin >> n;
 
//     vector<long long> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
 
//     if (n == 0) {
//         cout << 0 << "\n";
//         return;
//     }
 
//     long long current_max = arr[0];
//     long long overall_max = arr[0];
 
//     for (int i = 1; i < n; i++) {
//         bool parities_differ = (get_parity(arr[i-1]) != get_parity(arr[i]));
 
//         if (parities_differ) {
//             current_max = max(arr[i], current_max + arr[i]);
//         } else {
//             current_max = arr[i];
//         }
 
//         overall_max = max(overall_max, current_max);
//     }
 
//     cout << overall_max << "\n";
// }
 
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int t; 
//     if (!(cin >> t)) return 0;
    
//     while (t--) {
//         solve();
//     }
    
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
 
using namespace std;
void solve() {
    int n;
    cin >> n;
 
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    if (n == 0) {
        cout << 0 << "\n";
        return;
    }
 
    long long current_max = arr[0];
    long long overall_max = arr[0];
 
    for (int i = 1; i < n; i++) {
        if(abs(arr[i-1] % 2) !=abs(arr[i] % 2)) {
            current_max = max(arr[i], current_max + arr[i]);
        } else {
            current_max = arr[i];
        }
 
        overall_max = max(overall_max, current_max);
    }
 
    cout << overall_max << "\n";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; 
    if (!(cin >> t)) return 0;
    
    while (t--) {
        solve();
    }
    
    return 0;
}