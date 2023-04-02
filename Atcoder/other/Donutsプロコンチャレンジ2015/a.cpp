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
    int r,d;
    cin >> r >> d;
    double pi=acos(-1);
    double ans=r*r*d*2*pi*pi;
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}