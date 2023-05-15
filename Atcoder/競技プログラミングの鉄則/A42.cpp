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
    int n,k;
    cin >> n >> k;
    vector<int>A(n),B(n);
    rep(i,n)cin >> A[i] >> B[i];
    int ans=0;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            int cnt=0;
            rep(l,n){
                if(A[l]>=i && A[l]<=i+k && B[l]>=j && B[l]<=j+k)cnt++;
            }
            ans=max(ans,cnt);
        }
    }
    cout << ans << endl;
    return 0;
}