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
    int n,m,l,q;
    cin >> n;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    cin >> m;
    vector<int>b(m);
    rep(i,m)cin >> b[i];
    cin >> l;
    vector<int>c(l);
    rep(i,l)cin >> c[i];

    set<int>st;
    rep(i,n)rep(j,m)st.insert(a[i]+b[j]);

    cin >> q;
    vector<int>x(q);
    rep(i,q)cin >> x[i];
    rep(i,q){
        bool flag=false;
        rep(j,l){
            int y=x[i]-c[j];
            if(st.count(y)){
                flag=true;
            }
        }
        if(flag)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}