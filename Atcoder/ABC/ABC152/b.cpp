#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    char a,b;
    cin >> a >> b;
    string sa,sb;
    rep(i,b-'0'){
        sa+=a;
    }
    rep(i,a-'0'){
        sb+=b;
    }
    if(sa>sb){
        cout << sb << endl;
    }else{
        cout << sa << endl;
    }
    return 0;
}