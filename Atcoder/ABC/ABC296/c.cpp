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
    int n,x;
    cin >> n >> x;
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    sort(ALL(A));
    rep(i,n){
        int a=A[i];
        int p=lower_bound(ALL(A),(ll)x+a)-A.begin();
        if(ll(x+a)==A[p]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}