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
    int n,d;
    cin >> n >> d;
    vector<int>T(n);
    rep(i,n)cin >> T[i];
    for(int i=1;i<n;i++){
        if(T[i]-T[i-1]<=d){
            cout << T[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}