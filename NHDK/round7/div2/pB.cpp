#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a;
    cin>>a;

    stringstream ss;
    ss<<a;
    string n=ss.str();        //https://stackoverflow.com/questions/5590381/easiest-way-to-convert-int-to-string-in-c

    string st=n+"2021";     

    int num=stoi(st);         //https://www.delftstack.com/zh-tw/howto/cpp/how-to-convert-string-to-int-in-cpp/

    int ans=num*2020;
    cout<<ans;
}
//練字串處理
