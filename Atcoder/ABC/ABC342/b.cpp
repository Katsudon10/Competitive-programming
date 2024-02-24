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
    vector<int>p(n),c(n);
    rep(i,n)cin >> p[i];
    rep(i,n)c[p[i]-1]=i;
    int q;
    cin >> q;
    rep(i,q){
        int a,b;
        cin >> a >> b;
        if(c[a-1]<c[b-1])cout << a << endl;
        else cout << b << endl;
    }
    return 0;
}