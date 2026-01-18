#include<bits/stdc++.h>
using namespace std;

int checkdup(vector <int> &a){
    int k=0;
    for(int i=1;i<=a.size();i++){
        if(a[i]!=a[i-1]){
            a[k]=a[i-1];
            k++;
            
            
        }
    }
    return k;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    
    auto k =checkdup(a);
    cout<<k<<endl;
    for(auto it:a){
        cout<<it<<" ";
    }
    return 0;
}