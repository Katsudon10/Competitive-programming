#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int h,w;
    cin >> h >> w;
    rep(i,h){
        string str;
        cin >> str;
        rep(i,2) cout << str << endl;
    }
    return 0;
}