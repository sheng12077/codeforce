#include <bits/stdc++.h>
using namespace std;
#define int long long  

signed main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

    int n;
    cin>>n;
    vector<int>vec(n);
    for (int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int ans=vec[0];
    for (int i=0;i<n-1;i++){
        int tmp=abs(vec[i+1]-vec[i]);
        ans=min(tmp,ans);
    }
    cout<<ans;
}
