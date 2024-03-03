#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dx={-1,0,1,0};
vector<int>dy={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int h,w,n;
    cin >> h >> w >> n;
    vector<vector<int>>A(h,vector<int>(w,0));
    int x=0,y=0,d=0;
    rep(i,n){
        if(A[x][y]==0){
            A[x][y]=1;
            d++;
        }else{
            A[x][y]=0;
            d+=3;
        }
        d%=4;
        x+=dx[d];y+=dy[d];
        x=(x+h)%h;
        y=(y+w)%w;
    }
    rep(i,h){
        rep(j,w){
            if(A[i][j]==1)cout << '#';
            else cout << '.';
        }
        cout << endl;
    }
    return 0;
}