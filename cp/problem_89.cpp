#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int arr[8]={0,1,0,3,2,0,2,5};
    unordered_map<int,int>mp;
    for(auto & ele : arr){
        mp[ele]++;
    }
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++){
        if(mp.find(v[i]) != mp.end() &&  mp[v[i]] > 0){
            mp[v[i]]--;
            c1++;
        }
        c2++;
        if(c1==8){
            cout<<c2<<"\n";
            return;
        }
    }
    cout<<0<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
