
#include <bits/stdc++.h>
using namespace std;

void printname(int n){
    if(n == 0) return;      // base case
    cout << "charan" << endl;
    printname(n - 1);       // recursive call
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    printname(n);
    return 0;
}
