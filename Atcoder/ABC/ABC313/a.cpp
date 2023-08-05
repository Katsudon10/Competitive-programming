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
    int n;
    cin >> n;
    vector<int>p(n);
    rep(i,n)cin >> p[i];
    int m=0;
    for(int i=1;i<n;i++)m=max(m,p[i]);
    if(p[0]>m)cout << 0 << endl;
    else cout << m-p[0]+1 << endl;
    return 0;
}