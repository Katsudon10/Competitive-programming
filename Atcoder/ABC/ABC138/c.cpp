#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
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
    vector<int>v(n);
    rep(i,n)cin >> v[i];
    sort(v.begin(),v.end());
    double ans=v[0];
    for(int i=1;i<n;i++){
        ans=(double)(ans+v[i])/2;
    }
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}