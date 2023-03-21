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
int mex(vector<int> &B,int k){
    sort(ALL(B));
    rep(i,k){
        if(B[i]!=i){
            return i;
        }
    }
    return k;
}

int main(){
    int n,k;
    cin >> n >> k;
    set<int>A;
    rep(i,n){
        int a;
        cin >> a;
        A.insert(a);
    }
    int ans=0;
    for(int x:A){
        if(x==ans)ans++;
    }
    ans=min(ans,k);
    cout << ans << endl;
    return 0;
}