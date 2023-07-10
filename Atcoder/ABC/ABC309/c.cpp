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
    int n,k;
    cin >> n >> k;
    vector<P>p(n);
    rep(i,n)cin >> p[i].first >> p[i].second;
    sort(ALL(p));
    ll cnt=0;

    rep(i,n)cnt+=p[i].second;
    if(cnt<=k){
        cout << 1 << endl;
    }else{
        rep(i,n){
            cnt-=p[i].second;
            if(cnt<=k){
                cout << p[i].first+1 << endl;
                return 0;
            }
        }
        cout << p.back().second+1 << endl;
    }
    return 0;
}