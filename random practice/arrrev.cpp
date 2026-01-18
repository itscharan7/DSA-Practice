#include<bits/stdc++.h>
using namespace std;

int* revarr(int i,int arr[],int n){
    int st=i;
    int end=n-1;
    while(st<=end){
        swap(arr[st],arr[end-1]);
        revarr(i+1,arr,n-1);
    }
    return arr;
}


int main(){
int arr[10],n;
cout<<"Enter Array size";
cin>>n;
cout<<"enter Array elements";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
revarr(0,arr,n);
for(int arr1:arr){
    cout<<arr1<<" ";

}

}