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
    int m;
    cin >> m;
    vector<int>D(m);
    int n=0;
    rep(i,m){
        cin >> D[i];
        n+=D[i];
    }
    n=(n+1)/2;
    int sum=0;
    rep(i,m){
        if(sum+D[i]>=n){
            cout << i+1 << ' ' << n-sum << endl;
            return 0;
        }
        sum+=D[i];
    }
    return 0;
}