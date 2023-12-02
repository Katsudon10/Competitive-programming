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
    int M,D;
    cin >> M >> D;
    int y,m,d;
    cin >> y >> m >> d;
    d++;
    if(d+1>D){
        d=1;
        m++;
    }
    if(m>M){
        m=1;
        y++;
    }
    cout << y << ' ' << m << ' ' << d << endl;
    return 0;
}