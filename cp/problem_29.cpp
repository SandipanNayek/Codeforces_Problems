#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int m;
cin>>n;
cin>>m;
int count=0;
while(m>0){
    int k= m/n;
    if(k % 3==0) {
        m=m/3;
    }
    else{
        m=m/2;
    }
    count++;
    if(count==n) break;
}
cout<<count;
}
