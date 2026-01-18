#include<bits/stdc++.h>
using namespace std;

int largestelement(int arr[],int n){
    int max=arr[0];
    int secondlargest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]>secondlargest&&arr[i]<max){
            secondlargest=arr[i];
        }

    

    }
    
   return secondlargest;
}



int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
   cout<< largestelement(arr,n);
return 0;



    
}