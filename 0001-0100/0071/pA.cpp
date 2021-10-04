#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

signed  main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s.length()<=10){
            cout<<s<<endl;
        }
        else{
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
    }
}
