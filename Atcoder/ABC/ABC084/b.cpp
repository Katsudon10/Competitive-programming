#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b;
    string s;
    cin >> a >> b >> s;
    bool flag=true;
    rep(i,a+b+1){
        if(i<a){
            if(!isdigit(s[i]))flag=false;
        }
        if(i==a){
            if(s[i]!='-') flag=false;
        }
        if(i>a){
            int n=s[i]-'0';
            if(!isdigit(s[i]))flag=false;
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}