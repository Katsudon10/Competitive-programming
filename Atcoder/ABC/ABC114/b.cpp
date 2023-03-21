#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    int ans=inf;
    rep(i,s.size()-2){
        int x=stoi(s.substr(i,3));
        if(abs(x-753)<ans)ans=abs(x-753);
    }
    cout << ans << endl;
    return 0;
}