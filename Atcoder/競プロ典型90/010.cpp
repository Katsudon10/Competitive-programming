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
    vector<int>C(n+1),P(n+1);
    for(int i=1;i<=n;i++)cin >> C[i] >> P[i];
    int q;
    cin >> q;
    vector<int>L(q+1),R(q+1);
    for(int i=1;i<=q;i++)cin >> L[i] >> R[i];
    vector<int>sum1(n+1,0),sum2(n+1,0);
    for(int i=1;i<=n;i++){
        sum1[i]=sum1[i-1];
        sum2[i]=sum2[i-1];
        if(C[i]==1)sum1[i]+=P[i];
        else sum2[i]+=P[i];
    }
    for(int i=1;i<=q;i++){
        int ans1=sum1[R[i]]-sum1[L[i]-1];
        int ans2=sum2[R[i]]-sum2[L[i]-1];
        cout << ans1 << ' ' << ans2 << endl;
    }
    return 0;
}