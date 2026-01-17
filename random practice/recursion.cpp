#include<bits/stdc++.h>
using namespace std;

void printnum(int i,int n){
    if(n<i)return;
    cout<<n<<endl;
    printnum(i,n-1);
}

int main(){
int x;
cin>>x;
printnum(1,x);
return 0;
}