#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int h,w,x,y;
    cin >> h >> w >> x >> y;
    vector<vector<char>>S(h,vector<char>(w));
    rep(i,h)rep(j,w) cin >> S[i][j];
    x--;y--;
    int ans=0;
    for(int i=x-1;i>=0;i--){
        if(S[i][y]=='.'){
            ans++;
        }else{
            break;
        }
    }

    for(int i=x+1;i<h;i++){
        if(S[i][y]=='.'){
            ans++;
        }else{
            break;
        }
    }

    for(int i=y-1;i>=0;i--){
        if(S[x][i]=='.'){
            ans++;
        }else{
            break;
        }
    }
    
    for(int i=y+1;i<w;i++){
        if(S[x][i]=='.'){
            ans++;
        }else{
            break;
        }
    }

    cout << ans+1 << endl;
    return 0;
}