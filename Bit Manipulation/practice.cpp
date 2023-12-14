#include<bits/stdc++.h>
using namespace std;
void printBinary(int n){
    for(int i=31;i>=0;i--){
        cout<< ((n>>i) & 1) ;
    }
    cout<<endl;
}
int main()
{   
    int n; cin>>n;
    printBinary(n);
    return 0;
}