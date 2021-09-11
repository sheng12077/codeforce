#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int>vec;

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,k;
    cin>>n>>k;
    while(n--){
        int t;
        cin>>t;
        vec.push_back(t);
    }
    int ans;
    for (int i=0;i<vec.size();i++){
        if (vec[i]>k){
            ans++;
        }
    }
    cout<<ans;
}
