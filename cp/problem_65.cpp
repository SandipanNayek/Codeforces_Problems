
 #include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


void solve(){
	int n ;cin >> n;
	int a[n];
	for(int i =0 ;i <n ;i++)cin >> a[i];
	
	int max_ele_idx = 0;
	for(int i =0 ;i<n;i++){
		if(a[max_ele_idx] < a[i]){
			max_ele_idx = i;
		}
	}
	
	int p = n-1;
	int l = max_ele_idx , r = max_ele_idx;
	
	for(int i =1 ;i <n ;i++){
		if(l>0 && a[l-1] == p){
			l--;
			p--;
		}
		else if(r<n-1 && a[r + 1]==p){
			r++;
			p--;
		}
		else{
			cout <<"NO\n";
			return;
		}
	}
	
	cout <<"YES\n";
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