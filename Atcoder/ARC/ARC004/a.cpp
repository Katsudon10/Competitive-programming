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
int f(int x1,int y1,int x2,int y2){
    return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}

int main(){
    int n;
    cin >> n;
    vector<P>p(n);
    rep(i,n)cin >> p[i].first >> p[i].second;
    int ans=-1;
    rep(i,n){
        rep(j,n){
            ans=max(ans,f(p[i].first,p[i].second,p[j].first,p[j].second));
        }
    }
    cout << fixed << setprecision(10) << sqrt(ans) << endl;
    return 0;
}