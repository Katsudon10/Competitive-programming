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
    string x="abcdefgh",y="12345678";
    vector<string>s(8);
    rep(i,8)cin >> s[i];
    rep(i,8)rep(j,8){
        if(s[i][j]=='*'){
            cout << x[j] << y[7-i] << endl;
            return 0;
        }
    }
    return 0;
}