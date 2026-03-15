#include <bits/stdc++.h>
using namespace std;
int val=0;
long long check(int n){
    if(n==1) return 2;
    return (long long)pow(2,n)+check(n-1);
}

int main() {
    int t;
    cin >> t;
    cout<<check(t);
    
}
