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
    int n,x,y,z;
    cin >> n >> x >> y >> z;
    vector<int>a(n),b(n);
    rep(i,n)cin >> a[i];
    rep(i,n)cin >> b[i];

    vector<bool>flag(n);
    vector<P>p;
    rep(i,n)p.emplace_back(-a[i],i);
    sort(ALL(p));
    rep(i,x)flag[p[i].second]=true;

    p.clear();
    rep(i,n)if(!flag[i])p.emplace_back(-b[i],i);
    sort(ALL(p));
    rep(i,y)flag[p[i].second]=true;

    p.clear();
    rep(i,n)if(!flag[i])p.emplace_back(-a[i]-b[i],i);
    sort(ALL(p));
    rep(i,z)flag[p[i].second]=true;

    rep(i,n)if(flag[i])cout << i+1 << endl;
    return 0;
}