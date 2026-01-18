#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int i,b;
    if(n==1){
      return 1;
    }
  
    
  return n*fact(n-1);
}

int main(){
int x;
cin>>x;
cout<<fact(x);
return 0;
}