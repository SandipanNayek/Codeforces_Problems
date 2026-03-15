#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main() {
    string s;
    cin>>s;
   vector<int>arr;
   for(char c : s){
    if(c !='+')
      arr.push_back(c-'0'); //convert char to int
   }
   sort(arr.begin(),arr.end());
   for(int i=0;i<arr.size();i++){
     cout<<arr[i];
     if(i!=arr.size()-1) cout<<'+';
   }
}