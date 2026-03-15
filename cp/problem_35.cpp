#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
         cin>>arr[i];
    }
    long long maxC=arr[n-1];
    long long prev=arr[n-1];
   for(int i=n-2;i>=0;i--){
    if(prev<=0) break;
     if(prev>arr[i]){
      maxC+=arr[i];
      prev=arr[i];
     }
     else{
      maxC+=prev-1;
      prev=prev-1;
     }
    
   }
   cout<<maxC;
}