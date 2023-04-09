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
    int h,w;
    cin >> h >> w;
    vector<vector<char>>S(h,vector<char>(w));
    rep(i,h)rep(j,w)cin >> S[i][j];
    rep(i,h){
        rep(j,w-1){
            if(S[i][j]=='T' && S[i][j+1]=='T'){
                S[i][j]='P';
                S[i][j+1]='C';
                j++;
            }
        }
    }
    rep(i,h){
        rep(j,w){
            cout << S[i][j];
        }
        cout << endl;
    }
    return 0;
}