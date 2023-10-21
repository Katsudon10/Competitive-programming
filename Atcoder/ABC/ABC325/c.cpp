#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int> dxs = {1, 0, -1, 0, 1, -1, -1, 1};
vector<int> dys = {0, 1, 0, -1, 1, 1, -1, -1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());
int h,w;

void check(vector<vector<bool>> &flag,int i,int j){
    flag[i][j]=false;
    rep(k,8){
        int ni=i+dxs[k];
        int nj=j+dys[k];
        if(ni>=0 && ni<h && nj>=0 && nj<w){
            if(flag[ni][nj])check(flag,ni,nj);
        }
    }
}

int main(){
    cin >> h >> w;
    vector<string>s(h);
    vector<vector<bool>>flag(h,vector<bool>(w,false));
    rep(i,h)cin >> s[i];
    rep(i,h)rep(j,w)if(s[i][j]=='#')flag[i][j]=true;

    ll cnt=0;
    rep(i,h){
        rep(j,w){
            if(flag[i][j]){
                cnt++;
                check(flag,i,j);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}