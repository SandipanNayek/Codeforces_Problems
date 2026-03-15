#include<iostream>
using namespace std;
#include<algorithm>
#include<cmath>
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=1;i<=n;i++){
         for(int j=1;j<=m;j++){
            if(i%2 != 0){
            cout<<"#";
             }
        else{ // i%2 == 0
         if(i%4 !=0){
            if(j==m) cout<<"#";
            else cout<<".";
         }
         else if(i%4 ==0){
            if(j==1) cout<<"#";
            else cout<<".";
         }
        }
    }
    cout<<endl;
 }
}
