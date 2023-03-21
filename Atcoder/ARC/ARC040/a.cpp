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

int main(){
    int n;
    cin >> n;
    vector<string>S(n);
    rep(i,n)cin >> S[i];
    int red=0,blue=0;
    rep(i,n)rep(j,n){
        if(S[i][j]=='R')red++;
        if(S[i][j]=='B')blue++;
    }
    if(red>blue){
        cout << "TAKAHASHI" << endl;
    }else if(blue>red){
        cout << "AOKI" << endl;
    }else{
        cout << "DRAW" << endl;
    }
    return 0;
}