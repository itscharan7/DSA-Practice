#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> mpp;
    //precompute
   for(int i=0;i<n;i++){
      mpp[a[i]]++;
   }
    //queries
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num]<<" ";
    }
    //return 0;
}