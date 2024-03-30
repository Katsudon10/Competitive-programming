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
    string n;
    cin >> n;
    int ans=0;
    bool flag=true;
    for(int i=1;i<n.size();i++)if(n[i]!='9')flag=false;
    if(flag){
        ans=n[0]-'0'+(n.size()-1)*9;
    }else{
        ans=n[0]-'0'+(n.size()-1)*9-1;
    }
    cout << ans << endl;
    return 0;
}