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
    int k;
    cin >> k;

    vector<ll>a;
    rep(i,1<<10){
        ll x=0;
        for(int j=9;j>=0;j--){
            if(i&(1<<j)){
                x*=10;
                x+=j;
            }
        }
        if(x==0)continue;
        a.push_back(x);
    }
    sort(ALL(a));
    cout << a[k-1] << endl;
    return 0;
}