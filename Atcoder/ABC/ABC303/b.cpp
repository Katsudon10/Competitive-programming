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
    int n,m;
    cin >> n >> m;
    vector<vector<int>>a(m,vector<int>(n));
    rep(i,m)rep(j,n)cin >> a[i][j];
    set<P>s;
    rep(i,m){
        for(int j=0;j<n-1;j++){
            int a1=a[i][j];
            int a2=a[i][j+1];
            if(a1>a2)swap(a1,a2);
            s.insert(P(a1,a2));
        }
    }
    cout << n*(n-1)/2-s.size() << endl;
    return 0;
}