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
    int n,y;
    cin >> n >> y;
    rep(i,n+1){
        rep(j,n+1){
            int m=n-i-j;
            if(m>=0 && i*10000+j*5000+m*1000==y){
                cout << i << ' ' << j << ' ' << m << endl;
                return 0;
            }
        }
    }
    cout << -1 << ' ' << -1 << ' ' << -1 << endl;
    return 0;
}