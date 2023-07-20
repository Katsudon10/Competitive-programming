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
    int n;
    cin >> n;
    vector<int>A(n);
    for(int i=1;i<=n;i++)cin >> A[i];
    vector<bool>flag(n+1,false);
    int next=1;
    int ans=0;
    rep(i,n){
        if(flag[next])break;
        if(next==2){
            cout << ans << endl;
            return 0;
        }
        flag[next]=true;
        next=A[next];
        ans++;
    }
    cout << -1 << endl;
    return 0;
}