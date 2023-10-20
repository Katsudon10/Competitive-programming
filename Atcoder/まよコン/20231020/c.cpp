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
    int n,k;
    cin >> n >> k;
    double ans=0;
    for(int i=1;i<=n;i++){
        int x=i;
        double q=1.0/n;
        while(x<k){
            x*=2;
            q/=2;
        }
        ans+=q;
    }
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}