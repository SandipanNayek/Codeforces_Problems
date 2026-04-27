#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl '\n'
#define MOD 1000000007
#define int long long
#define N 1000000007L;
 
 
void solve()
{	
	string a,b; cin>>a>>b;
	int maxover = 0;
	int l = a.length();
	int r = b.length();
	for(int i = 0;i<r;i++){
		int cur = 0;
		int x = i;
		int y = 0;
		while(x<r && y<l){
			if(b[x]==a[y]){
				x++;
				y++;
				cur++;
			}
			else{
				y++;
			}
		}
		maxover = max(maxover,cur);
	}
	int res = l + r - maxover;
	cout<<res<<endl;
	} 	
	
signed main()
{
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
// freopen("input.txt", "rt", stdin);
// freopen("output.txt", "wt", stdout);
int t; cin>>t;
while(t-->0){
solve();
}	 	
}
