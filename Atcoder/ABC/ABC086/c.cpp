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
    vector<int>t(n),x(n),y(n);
    rep(i,n)cin >> t[i] >> x[i] >> y[i];
    int pt=0,px=0,py=0;
    rep(i,n){
        int d=abs(x[i]-px)+abs(y[i]-py);
        int dt=t[i]-pt;
        if(dt<d){
            cout << "No" << endl;
            return 0;
        }
        if((dt-d)%2==1){
            cout << "No" << endl;
            return 0;
        }
        pt=t[i];
        px=x[i];
        py=y[i];
    }
    cout << "Yes" << endl;
    return 0;
}