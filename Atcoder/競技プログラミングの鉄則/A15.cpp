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
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    vector<int>B(n);
    B=A;
    sort(ALL(B));
    B.erase(unique(ALL(B)),B.end());
    vector<int>N(n,0);
    rep(i,n){
        int pos=lower_bound(ALL(B),A[i])-B.begin();
        N[i]=pos+1;
    }
    rep(i,n)cout << N[i] << ' ';
    cout << endl;
    return 0;
}