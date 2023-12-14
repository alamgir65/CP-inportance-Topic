#include<bits/stdc++.h>
using namespace std;
void printBinary(int n){
    for(int i=10;i>=0;i--){
        cout<<((n>>i) & 1) ;
    }
    cout<<endl;
}
int main()
{   
    int n; cin>>n;
    // i th bit set or not cheak
    printBinary(n);
    int i; cin>>i;
    int x=n;
    if((x & (1<<i)) != 0) cout<<"I th bit set"<<endl;
    else cout<<"I th bit unset"<<endl;

    // i th bit set korar uphay
    printBinary(n | (1<<i));

    // kono akta binary represent k ulta korar uphay
    printBinary(~n);

    // i th bit unset korar uphay
    printBinary(n & (~ (1<<i)));

    // bit toggle bit 0 hole 1 kore dibe and 1 hole 0 kore dibe
    printBinary(n ^ (i<<i));
    printBinary(n ^ (i<<(i+1)));


    return 0;
}