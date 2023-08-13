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
    vector<vector<int>>A(n);
    vector<int>C(n);
    rep(i,n){
        cin >> C[i];
        A[i]=vector<int>(C[i]);
        rep(j,C[i]){
            cin >> A[i][j];
        }
    }
    int x;
    cin >> x;

    vector<int>temp;
    rep(i,n){
        rep(j,C[i]){
            if(A[i][j]==x)temp.push_back(i);
        }
    }

    int cmin=inf;
    for(int v:temp)cmin=min(cmin,C[v]);

    vector<int>ans;
    for(int v:temp)if(C[v]==cmin)ans.push_back(v+1);

    cout << ans.size() << endl;
    for(int v:ans)cout << v << ' ';
    cout << endl;
    return 0;
}