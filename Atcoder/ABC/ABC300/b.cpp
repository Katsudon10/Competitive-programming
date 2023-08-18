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
    int h,w;
    cin >> h >> w;
    vector<string>a(h),b(h);
    rep(i,h)cin >> a[i];
    rep(i,h)cin >> b[i];
    rep(i,h)rep(j,w){
        vector<string>ta=a;
        rep(k,h)rep(l,w)ta[(i+k)%h][(j+l)%w]=a[k][l];
        if(ta==b){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}