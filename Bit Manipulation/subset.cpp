#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n; cin>>n;
    int mx=(1<<n);
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<vector<int>> subsets;
    for(int i=0;i<mx;i++){
        vector<int> a;
        for(int j=0;j<n;j++){
            if((i & (1<<j)) != 0){
                a.push_back(v[j]);
            }
        }
        subsets.push_back(a);
    }

    for(auto subset:subsets){
        for(int val:subset){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}