


#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int MAX_idx=0;
    int MIN_idx=0;
    int mx=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(mx < v[i]){
            mx=v[i];
            MAX_idx=i;
        }
    }
    int mn=INT_MAX;
    for(int j=0;j<v.size();j++){
        if(mn >= v[j]){
            mn=v[j];
            MIN_idx=j;
        }
    }
 
     int max_count=MAX_idx-0;
     int min_count=n-1-MIN_idx;
     if(MAX_idx>MIN_idx){
        cout<< min_count+max_count-1;
     }
     else{
        cout<<min_count+max_count;
     }
}