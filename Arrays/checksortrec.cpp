#include<bits/stdc++.h>
using namespace std;
bool checksort(int st,int arr[],int n){

   if(st==n-1)return true;

    if(arr[st]>arr[st+1])return false;
    return checksort(st+1,arr,n);
}

int main(){
    int n;
    int count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
   cout<< checksort(0,arr,n);
  
}