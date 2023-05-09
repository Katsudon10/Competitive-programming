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
    int n,x,y;
    cin >> n >> x >> y;
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    vector<int>grundy(1000001);
    rep(i,1000001){
        vector<bool>transit(3,false);
        if(i>=x)transit[grundy[i-x]]=true;
        if(i>=y)transit[grundy[i-y]]=true;
        if(!transit[0])grundy[i]=0;
        else if(!transit[1])grundy[i]=1;
        else grundy[i]=2;
    }
    int ans=0;
    rep(i,n)ans^=grundy[A[i]];
    if(ans!=0)cout << "First" << endl;
    else cout << "Second" << endl;
    return 0;
}