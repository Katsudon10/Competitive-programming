#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    bool a=true,b=true;
    rep(i,3){
        if(s[i]!=s[i+1])a=false;
        if(((s[i]-'0')+1)%10!=(s[i+1]-'0'))b=false;
    }
    if(a || b){
        cout << "Weak" << endl;
    }else{
        cout << "Strong" << endl;
    }
    return 0;
}