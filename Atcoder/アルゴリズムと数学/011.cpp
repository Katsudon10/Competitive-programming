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
    vector<bool>p(n+1,true);
    for(int i=2;i<=n;i++){
        for(int j=i*2;j<=n;j+=i){
            p[j]=false;
        }
    }
    for(int i=2;i<=n;i++){
        if(p[i])cout << i << ' ';
    }
    cout << endl;
    return 0;
}