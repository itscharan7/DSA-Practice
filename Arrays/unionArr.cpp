#include<bits/stdc++.h>
using namespace std;
vector <int> unionarr(vector <int> a , vector <int> b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int>temp;

    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            if(temp.size()==0||temp.back()!=a[i]){
                temp.push_back(a[i]);
               
            }
             i++;
        }
        else{
            if(temp.size()==0||temp.back()!=b[j]){
                temp.push_back(b[j]);
              
            }
              j++;
        }
    }
    while(i<n1){
      if(temp.size()==0||temp.back()!=a[i]){
                temp.push_back(a[i]);
              
            }  
              i++;
    }
    while(j<n2){
      if(temp.size()==0||temp.back()!=b[j]){
                temp.push_back(b[j]);
                
            }  
            j++;
    }
    return temp;

}

int main(){
    int n;
    int i=0;
    cin>>n;
    vector <int>a(n);
    vector <int>b(n);

   for(i=0;i<n;i++){
    cin>>a[i];

   }
   for(i=0;i<n;i++){
    cin>>b[i];
   }
   vector<int> temp=unionarr(a,b);
   for(auto it:temp){
    cout<<it<<" ";
   }

}