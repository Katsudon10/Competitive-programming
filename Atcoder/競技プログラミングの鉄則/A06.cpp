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
    int n,q;
    cin >> n >> q;
    vector<int>A(n+1,0);
    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        A[i]=a+A[i-1];
    }
    rep(i,q){
        int l,r;
        cin >> l >> r;
        cout << A[r]-A[l-1] << endl;
    }
    return 0;
}