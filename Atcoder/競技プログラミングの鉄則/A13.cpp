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
    vector<int>A(n+1),R(n+1);
    for(int i=1;i<=n;i++)cin >> A[i];

    for(int i=1;i<n;i++){
        if(i==1)R[i]=1;
        else R[i]=R[i-1];

        while(R[i]<n && A[R[i]+1]-A[i]<=k){
            R[i]++;
        }
    }

    ll ans=0;
    for(int i=1;i<n;i++){
        ans+=R[i]-i;
    }
    cout << ans << endl;
    return 0;
}