#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s,t,u;
    int a,b;
    cin >> s >> t >> a >> b >> u;
    if(s==u){
        a--;
    }else{
        b--;
    }
    cout << a << ' ' << b << endl;
    return 0;
}