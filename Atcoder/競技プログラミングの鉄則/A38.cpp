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
    int d,n;
    cin >> d >> n;
    vector<int>time(d+1,24);
    rep(i,n){
        int l,r,h;
        cin >> l >> r >> h;
        for(int j=l;j<=r;j++){
            time[j]=min(time[j],h);
        }
    }
    ll ans=0;
    for(int i=1;i<=d;i++){
        ans+=time[i];
    }
    cout << ans << endl;
    return 0;
}