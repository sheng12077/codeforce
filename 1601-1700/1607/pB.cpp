#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define inf 1e9
#define maxn 10000005

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        int a,b;
        a=m/4;   
        b=m%4;   
        int ans;
        if(n%2==0){
            if(b==1){
                ans=n-(4*a+1);
            }
            else if(b==2){
                ans=n-(4*a+1)+(4*a+2);
            }
            else if(b==3){
                ans=n-(4*a+1)+(4*a+2)+(4*a+3);
            }
            else{
                ans=n;
            }
            cout<<ans<<endl;
        }
        else{
            if(b==1){
                ans=n+(4*a+1);
            }
            else if(b==2){
                ans=n+(4*a+1)-(4*a+2);
            }
            else if(b==3){
                ans=n+(4*a+1)-(4*a+2)-(4*a+3);
            }
            else{
                ans=n;
            }
            cout<<ans<<endl;
        }
    }
}
