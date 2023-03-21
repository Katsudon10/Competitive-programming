#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    vector<string>s(2);
    rep(i,2)cin >> s[i];
    if(s[0][0]=='#' && (s[0][1]=='#' || s[1][0]=='#')){
        cout << "Yes" << endl;
    }else if(s[1][1]=='#' && (s[0][1]=='#' || s[1][0]=='#')){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}