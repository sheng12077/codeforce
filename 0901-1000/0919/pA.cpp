#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    int i=0;
    cin>>k;
    while(k){
        i++;
        int j=i;
        int sum=0;
        while(j){
            sum+=(j%10);
            j/=10;
        }
        if(sum==10){
            k--;
        }
    }
    cout<<i<<endl;
}
