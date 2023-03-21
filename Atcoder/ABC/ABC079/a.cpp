#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    vector<char>s(4);
    rep(i,4) cin >> s[i];
    if(s[0]==s[1] && s[1]==s[2]){
        cout << "Yes" << endl;
    }else if(s[1]==s[2] && s[2]==s[3]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}