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
    ll n,k;
    cin >> n >> k;
    vector<ll>a(n);
    rep(i,n)cin >> a[i];
    ll sum=(1+k)*k/2;
    set<ll>st;
    rep(i,n){
        if(a[i]<=k && !st.count(a[i])){
            sum-=a[i];
            st.insert(a[i]);
        }
    }
    cout << sum << endl;
    return 0;
}