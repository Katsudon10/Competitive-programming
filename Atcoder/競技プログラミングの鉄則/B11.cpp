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

int search(int x,int n,vector<int> &A){
    int pos=lower_bound(ALL(A),x)-A.begin();
    return pos;
}

int main(){
    int n;
    cin >> n;
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    sort(ALL(A));

    int q;
    cin >> q;
    rep(i,q){
        int x;
        cin >> x;
        int ans=search(x,n,A);
        cout << ans << endl;
    }
    return 0;
}