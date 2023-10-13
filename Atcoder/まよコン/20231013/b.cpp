#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int h,w;
    cin >> h >> w;
    vector<string>g(h);
    vector<vector<bool>>flag(h,vector<bool>(w,false));
    rep(i,h)cin >> g[i];
    int i=0,j=0;
    while(1){
        if(flag[i][j]==true){
            cout << -1 << endl;
            return 0;
        }
        flag[i][j]=true;
        if(g[i][j]=='U' && i-1>=0)i-=1;
        else if(g[i][j]=='D' && i+1<h)i+=1;
        else if(g[i][j]=='L' && j-1>=0)j-=1;
        else if(g[i][j]=='R' && j+1<w)j+=1;
        else{
            cout << i+1 << ' ' << j+1 << endl;
            return 0;
        }
    }
    return 0;
}