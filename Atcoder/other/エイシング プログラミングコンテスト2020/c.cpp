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
    vector<int>ans(10000000);
    for(int x=1;x<=100;x++){
        for(int y=1;y<=100;y++){
            for(int z=1;z<=100;z++){
                int f=x*x+y*y+z*z+x*y+y*z+z*x;
                ans[f]++;
            }
        }
    }
    rep(i,n)cout << ans[i+1] << endl;
    return 0;
}