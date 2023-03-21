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
    vector<int>n(4);
    rep(i,4)cin >> n[i];
    sort(ALL(n));
    if(n[0]==1 && n[1]==4 && n[2]==7 && n[3]==9){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}