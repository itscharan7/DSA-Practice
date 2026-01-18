#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,q;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
      
        hash[arr[i]]++;
    }


    //Queries
    cin>>q;
    int number;

    while(q--){
        cin>>number;
       //fetch
       cout<<hash[number];

    }
}