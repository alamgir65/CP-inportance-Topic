#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n; 
    vector<int> masks(n,0);
    for(int i=0;i<n;i++){
        int mask=0;
        int x; cin>>x;
        for(int i=0;i<x;i++){
            int day; cin>>day;
            mask = mask | (1<<day);
        }
        masks[i]=mask;
    }
    int mx=0;
    int person1,person2;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int intersection= (masks[i] & masks[j]);
            int common=__builtin_popcount(intersection);
            if(common > mx){
                mx=common;
                person1=i;
                person2=j;
            }
        }
    }
    cout<<"Max: "<< mx << endl;
    cout<<"Person : "<<person1<<" And "<<person2<<endl;
    return 0;
}