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
    int n;
    cin >> n;
    vector<int>X(n),Y(n);
    rep(i,n)cin >> X[i] >> Y[i];
    rep(i,n){
        rep(j,i){
            rep(k,j){
                int x1=X[i],y1=Y[i];
                int x2=X[j],y2=Y[j];
                int x3=X[k],y3=Y[k];
                x1-=x2;y1-=y2;
                x3-=x2;y3-=y2;
                if(x1*y3==x3*y1){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}