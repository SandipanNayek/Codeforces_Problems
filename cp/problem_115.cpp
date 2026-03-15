#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> last(n + 2, -1); 

    
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

   
    for(int i = 1; i <= n; i++) pq.push({-1, i});

    for(int i = 0; i < n; i++) last[a[i]] = i;

    
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> temp_pq;
    while(!pq.empty()) {
        auto p = pq.top(); pq.pop();
        int num = p.second;
        temp_pq.push({last[num], num});
    }
    pq = temp_pq;

    vector<int> ans;
    int loc = n; 

    for(int i = 0; i < k; i++) {
        pair<int,int> top;
        
        while(true) {
            top = pq.top();
            pq.pop();
            int num = top.second;
            if(top.first == last[num]) break; // valid top
        }

        ans.push_back(top.second);
        last[top.second] = loc++;       
        pq.push({last[top.second], top.second}); 
    }

    for(int x : ans) cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}
