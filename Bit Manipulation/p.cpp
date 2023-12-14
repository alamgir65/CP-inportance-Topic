#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n; cin>>n;
    vii a(n);
    multiset<int> st;
    for(int i=0;i<n;i++){
        cin>>a[i];
        st.insert(a[i]);
    }
    
    sort(all(a));
    vii v;
    ll sum=a[0];
    v.push_back(a[0]);
    st.erase(st.begin());
    for(int i=1;i<n;i++){
        if(st.find(a[i])==st.end()) continue;
        sum += a[i];
        auto it=upper_bound(all(st),sum);
        if(it != st.end()){
            v.push_back(a[i]);
            v.push_back(*it);
            st.erase(it);
            continue;
        }
        v.push_back(a[i]);
    }
    ll sum1=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(sum1 >= v[i]) cnt++;
        sum1 += v[i];
    }
    cout<< cnt <<endl;
    for(auto val:v){
        cout<<val<<" ";
    }
    cout<<endl;
}
int main(){
    Alamgir
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}