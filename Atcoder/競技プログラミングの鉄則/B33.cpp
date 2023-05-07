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
    int n,h,w;
    cin >> n >> h >> w;
    vector<int>A(n),B(n);
    rep(i,n)cin >> A[i] >> B[i];
    int ans=A[0]-1;
    for(int i=1;i<n;i++)ans^=A[i]-1;
    rep(i,n)ans^=B[i]-1;
    if(ans!=0){
        cout << "First" << endl;
    }else{
        cout << "Second" << endl;
    }
    return 0;
}