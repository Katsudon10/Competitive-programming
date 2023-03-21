#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<string>>s(h,vector<string>(w));
    rep(i,h)rep(j,w)cin >> s[i][j];
    rep(i,h)rep(j,w){
        if(s[i][j]=="snuke"){
            cout << char('A'+j) << i+1 << endl;
            return 0;
        }    
    }

    return 0;
}