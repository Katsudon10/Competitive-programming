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
    int a,b,w;
    cin >> a >> b >> w;
    w*=1000;
    int l=inf,r=-inf;
    for(int i=1;i<=w;i++){
        if(a*i<=w && b*i>=w){
            l=min(l,i);
            r=max(r,i);
        }
    }
    if(l==inf)cout << "UNSATISFIABLE" << endl;
    else cout << l << " " << r << endl;
    return 0;
}