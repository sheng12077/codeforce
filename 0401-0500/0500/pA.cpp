#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed  main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a[30005];

    int n,t;
    cin>>n>>t;
    for(int i=1;i<=n-1;i++){
        cin>>a[i];
    }
    int now=1;
    while(now<t){
        now+=a[now];
    }
    if(now==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
