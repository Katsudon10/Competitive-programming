#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string S;
    cin >> S;
    string s[7]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
    rep(i,7){
        if(s[i]==S){
            cout << 7-i << endl;
        }
    }
    return 0;
}