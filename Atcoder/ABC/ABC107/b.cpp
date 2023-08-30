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
    vector<string>a(h);
    rep(i,h)cin >> a[i];
    vector<bool>x(h,false),y(w,false);
    rep(i,h){
        rep(j,w){
            if(a[i][j]=='#'){
                x[i]=true;
                y[j]=true;
            }
        }
    }
    rep(i,h){
        if(x[i]){
            rep(j,w){
                if(y[j])cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}