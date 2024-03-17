#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
struct Edge{
    int to;
    ll w;
    Edge(int to,ll w):to(to),w(w){}
};
using Graph = vector<vector<int>>;
using WeightedGraph = vector<vector<Edge>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int n;
    cin >> n;
    int ans=0;
    vector<P>d;
    d.emplace_back(-1,0);
    rep(i,n){
        int a;
        cin >> a;
        ans++;
        if(d.back().first==a)d.back().second++;
        else d.emplace_back(a,1);
        if(d.back().first==d.back().second){
            ans-=d.back().second;
            d.pop_back();
        }
        cout << ans << endl;
    }
    return 0;
}