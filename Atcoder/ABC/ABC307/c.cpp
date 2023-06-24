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
    int ha,wa;
    cin >> ha >> wa;
    vector<string>A(ha);
    rep(i,ha)cin >> A[i];
    int hb,wb;
    cin >> hb >> wb;
    vector<string>B(hb);
    rep(i,hb)cin >> B[i];
    int hx,wx;
    cin >> hx >> wx;
    vector<string>X(hx);
    rep(i,hx)cin >> X[i];
    
    return 0;
}