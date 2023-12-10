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
    int k,g,m;
    cin >> k >> g >> m;
    int gm=0,mm=0;
    rep(i,k){
        if(gm==g)gm=0;
        else if(mm==0)mm=m;
        else{
            int t=g-gm;
            gm+=min(mm,t);
            mm-=min(mm,t);
        }
    }
    cout << gm << ' ' << mm << endl;
    return 0;
}