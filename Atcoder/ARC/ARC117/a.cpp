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
    vector<int>E(a+b);
    if(a>b){
        rep(i,a)E[i]=i+1;
        for(int i=a;i<a+b-1;i++)E[i]=-(i-a+1);
        rep(i,a+b-1)E[a+b-1]-=E[i];
    }else{
        rep(i,a-1)E[i]=i+1;
        for(int i=a;i<a+b;i++)E[i]=-(i-a+1);
        rep(i,a+b)if(i!=a-1)E[a-1]-=E[i];
    }
    rep(i,a+b)cout << E[i] << ' ';
    cout << endl;
    return 0;
}