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
    int a,b;
    cin >> a >> b;
    if((a>0 && b>0) || (a<0 && b<0)){
        cout << b-a << endl;
    }else{
        cout << b-a-1 << endl;
    }
    return 0;
}