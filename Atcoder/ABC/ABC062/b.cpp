#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int h,w;
    cin >> h >> w;
    string s,t;
    w+=2;
    rep(i,w)t+='#';
    cout << t << endl;
    rep(i,h){
        cin >> s;
        cout << '#' << s << '#' << endl;
    }
    cout << t << endl;
    return 0;
}