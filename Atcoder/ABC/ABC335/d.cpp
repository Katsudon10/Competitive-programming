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
    
    vector<vector<int>> ans(n,vector<int>(n,-1));

    int cur=1;
    int i=0,j=0;

    auto f = [&](int di,int dj){
        ans[i][j]=cur;
        cur++;
        i+=di;
        j+=dj;
    };

    for(int l=n-1;l>0;l-=2){
        rep(k,l)f(0,1);
        rep(k,l)f(1,0);
        rep(k,l)f(0,-1);
        rep(k,l-1)f(-1,0);
        f(0,1);
    }
    
    rep(i,n){
        rep(j,n){
            if(ans[i][j]==-1)cout << 'T';
            else cout << ans[i][j];
            cout << ' ';
        }
        cout << endl;
    }
    return 0;
}