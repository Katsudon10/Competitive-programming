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
    int a,b,m;
    cin >> a >> b >> m;
    vector<int>A(a),B(b);
    rep(i,a)cin >> A[i];
    rep(i,b)cin >> B[i];
    int minA=*min_element(ALL(A));
    int minB=*min_element(ALL(B));
    int ans=minA+minB;

    rep(i,m){
        int x,y,c;
        cin >> x >> y >> c;
        x--,y--;
        ans=min(ans,A[x]+B[y]-c);
    }
    cout << ans << endl;
    return 0;
}