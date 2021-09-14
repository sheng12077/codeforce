#include<bits/stdc++.h>
using namespace std;
 
vector<int>vec;
 
signed main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    for (int i=0;i<4;i++){
        int n;
        cin>>n;
        vec.push_back(n);
    }
    sort(vec.begin(),vec.end());
    int ans=vec[0]*2+vec[1]*2+vec[2]+vec[3];
    cout<<ans<<"\n";
}
