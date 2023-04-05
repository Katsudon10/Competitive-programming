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
    vector<int>P(n),Q(n);
    rep(i,n)cin >> P[i];
    rep(i,n)cin >> Q[i];
    vector<int>O=P;
    sort(ALL(O));

    int a=-1,b=-1;
    int cnt=1;
    do{
        if(O==P)a=cnt;
        if(O==Q)b=cnt;
        cnt++;
    }while(next_permutation(ALL(O)));

    cout << abs(a-b) << endl;
    return 0;
}