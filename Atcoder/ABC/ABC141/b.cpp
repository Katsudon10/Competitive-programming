#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    bool flag=true;
    rep(i,s.size()){
        if(i%2==0 && s[i]=='L')flag=false;
        if(i%2==1 && s[i]=='R')flag=false;
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}