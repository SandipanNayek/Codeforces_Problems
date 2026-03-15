#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <map>
#include <set>

using namespace std;

void get_prime_factors(int num, set<int>& factors) {
    if (num <= 1) return;
    
    if (num % 2 == 0) {
        factors.insert(2);
        while (num % 2 == 0) num /= 2;
    }
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            factors.insert(i);
            while (num % i == 0) num /= i;
        }
    }
    
    if (num > 1) {
        factors.insert(num);
    }
}

void solve() {
    int n;
    if (!(cin >> n)) return; 
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    map<int, int> first_seen;
    
    int min_cost = 2; 

    for (int i = 0; i < n; ++i) {
        
        int val_0 = a[i];
        set<int> factors_0;
        get_prime_factors(val_0, factors_0);
        
        for (int p : factors_0) {
            if (first_seen.count(p)) {
                min_cost = min(min_cost, 0 + first_seen[p]);
            }
            if (!first_seen.count(p) || first_seen[p] > 0) {
                first_seen[p] = 0;
            }
        }

        int val_1 = a[i] + 1;
        set<int> factors_1;
        get_prime_factors(val_1, factors_1);
        
        for (int p : factors_1) {
            if (first_seen.count(p)) {
                min_cost = min(min_cost, 1 + first_seen[p]);
            }
            if (!first_seen.count(p) || first_seen[p] > 1) {
                first_seen[p] = 1;
            }
        }
        
        if (min_cost == 0) break;
    }

    cout << min_cost << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}