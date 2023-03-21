#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    vector<string>s(10);
    rep(i,10){
        string str;
        cin >> str;
        s[i]=str;
    }
    int a=inf,b=0,c=inf,d=0;
    rep(i,10){
        rep(j,s[i].size()){
            if(s[i][j]=='#'){
                a=min(a,i+1);
                b=max(b,i+1);
                c=min(c,j+1);
                d=max(d,j+1);
            }
        }
    }
    cout << a << ' ' << b << endl;
    cout << c << ' ' << d << endl;
    return 0;
}