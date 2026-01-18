#include<bits/stdc++.h>
using namespace std;
bool check(int i,string &str){
int n = str.size();
if(i>=n/2 )return true;
if(str[i]!=str[n-i-1])return false;
    return check(i+1,str);
}


int main(){
    string str;
    cin>>str;
   bool n= check(0,str);
   cout<<n;


}