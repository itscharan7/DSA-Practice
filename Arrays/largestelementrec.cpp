#include<bits/stdc++.h>
using namespace std;

int largestelement(int i,int arr[],int n,int max){
    
    if(i==n) {
    return max;
        
    } 
    if(arr[i]>max)max=arr[i];
    return largestelement(i+1,arr,n,max);
    
    
   

}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
   cout<< largestelement(0,arr,n,arr[0]);
return 0;



    
}