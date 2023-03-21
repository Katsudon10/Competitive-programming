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
    vector<int>p(n),t(n);
    rep(i,n)cin >> p[i];
    t=p;
    sort(ALL(p));
    
    vector<int>ans(n);
    do{
        if(t==p){
            for(int x:ans)cout << x << ' ';
            return 0;
        }else{
            ans=p;
        }
    }while(next_permutation(ALL(p)));
    return 0;
}