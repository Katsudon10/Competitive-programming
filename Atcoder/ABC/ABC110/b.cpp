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
    int n,m,X,Y;
    cin >> n >> m >> X >> Y;
    vector<int>x(n),y(m);
    rep(i,n)cin >> x[i];
    rep(i,m)cin >> y[i];
    sort(x.rbegin(),x.rend());
    sort(y.begin(),y.end());
    
    for(int z=X+1;z<=Y;z++){
        if(x[0]<z && z<=y[0]){
            cout << "No War" << endl;
            return 0;
        }
    }
    cout << "War" << endl;
    return 0;
}