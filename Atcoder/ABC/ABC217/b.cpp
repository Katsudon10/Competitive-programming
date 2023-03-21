#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    vector<bool>flag(4);
    string s[4]={"ABC","ARC","AGC","AHC"};
    rep(i,3){
        string str;
        cin >> str;
        rep(j,4){
            if(s[j]==str) flag[j]=true;
        }
    }
    rep(i,4){
        if(!flag[i])cout << s[i] << endl;
    }
    return 0;
}