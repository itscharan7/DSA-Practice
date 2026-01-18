#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    //int count=0;
    int i;
    cin>>n;
    int arr[n];
    for( i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0;i<n;i++){
      
            if(arr[i]<arr[i+1]){
                
            }
            else{
                cout<<"unsorted";
                break;
            }
        
    }
    if(i==n)
    cout<<"sorted";
            
     
  return 0;
    
}