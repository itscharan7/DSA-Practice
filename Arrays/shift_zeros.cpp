#include<bits/stdc++.h>
using namespace std;

void shift_zeros(int arr[],int n){
    int i,j;
    
    for( i=0;i<n;i++){
        
    for(j=i+1;j<n;j++){
            if(arr[i]==0){

                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
               
               
            }
       }
    }
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    
    
}

int main(){
    int  n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    shift_zeros(arr,n);
    return 0;
}
