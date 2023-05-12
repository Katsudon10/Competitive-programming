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
    int n,d;
    cin >> n >> d;
    vector<int>X(n),Y(n);
    vector<bool>used(n,false);
    ll ans=0;
    rep(i,n)cin >> X[i] >> Y[i];
    rep(i,d){
        int num=-1,value=0;
        rep(j,n){
            if(used[j])continue;
            if(value<Y[j] && X[j]<=i+1){
                value=Y[j];
                num=j;
            }
        }
        if(num!=-1){
            ans+=value;
            used[num]=true;
        }
    }
    cout << ans << endl;
    return 0;
}