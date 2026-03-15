#include<iostream>
using namespace std;
#include<climits>
#include<vector>
int main(){
   int n;
   cin>>n;
   int totalsum=0;
   int currentsum=0;
   int count=0;
   for(int i=1;i<=n;i++){
    currentsum=i+currentsum;
    totalsum=currentsum+totalsum;
    if(totalsum>n) break;
    count++;
   }
    cout<<count;
   }
   