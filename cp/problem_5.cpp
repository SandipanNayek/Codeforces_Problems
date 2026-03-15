#include<iostream>
using namespace std;
#include<algorithm>
#include<cmath>
int main(){
    int x1,x2,x3;
    cin>>x1;
    cin>>x2;
    cin>>x3;
    int mn=min(x1,min(x2,x3));
    int mx=max(x1,max(x2,x3));
    int mid;
    if(x1!=mn || x1!=mx){
        mid=x1;
    }
    else if(x2!=mn || x2!=mx){
        mid=x2;
    }
    else if(x3!=mn || x3!=mx){
        mid=x3;
    }
    int ans=abs(mid-mn)+abs(mid-mx);
    cout<<ans;
}