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
    vector<int>X(n),Y(n);
    rep(i,n)cin >> X[i] >> Y[i];
    vector<int>p(n);
    rep(i,n)p[i]=i;
    int cnt=0;
    double len=0;
    do{
        rep(i,n-1){
            double dx=X[p[i+1]]-X[p[i]];
            double dy=Y[p[i+1]]-Y[p[i]];
            len+=sqrt(dx*dx+dy*dy);
        }
        cnt++;
    }while(next_permutation(ALL(p)));
    double ans=len/cnt;
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}