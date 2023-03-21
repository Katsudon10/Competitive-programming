#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>>S(h,vector<char>(w));
    rep(i,h)rep(j,w) cin >> S[i][j];
    int ans=0;
    rep(i,h)rep(j,w){
        if(i+1<h){
           if(S[i][j]=='.' && S[i+1][j]=='.')ans++; 
        }
        if(j+1<w){
            if(S[i][j]=='.' && S[i][j+1]=='.')ans++; 
        }
    }
    cout << ans << endl;
    return 0;
}