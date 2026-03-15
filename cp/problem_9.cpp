#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        mp[x]=i;            //2 3 4 1(they give got)
        }
    for(int j=1;j<=n;j++){
            cout<<mp[j]<<" ";
        }
    

    
    }