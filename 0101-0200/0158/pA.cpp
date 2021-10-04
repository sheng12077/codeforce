#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed  main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;
    int a[1000];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int target=a[m];
    int ans=0;
    for(int i=1;i<=n;i++){
        if(a[i]>=target and a[i]>0){
            ans++;
        }
    }
    cout<<ans;
}
