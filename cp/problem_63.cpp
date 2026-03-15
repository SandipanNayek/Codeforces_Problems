#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    
    int zero_blocks = 0;
    int one_blocks = 0;
    
    if (n > 0) {
        char current_char = s[0];
        if (current_char == '0') zero_blocks++;
        else one_blocks++;

        for (int i = 1; i < n; ++i) {
            if (s[i] != s[i-1]) {
                current_char = s[i];
                if (current_char == '0') zero_blocks++;
                else one_blocks++;
            }
        }
    }

    if (zero_blocks == 0) {
        cout << n + 1 << "\n";
        return;
    }
    
    
    if (one_blocks == 0) {
        cout << n << "\n";
        return;
    }

    cout << n + max(zero_blocks, one_blocks) << "\n";
}
     
int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t; // Read number of test cases
    while (t--) {
        solve();
    }
    return 0;
}