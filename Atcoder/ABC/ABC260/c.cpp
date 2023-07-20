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

ll f(int n,int x,int y,bool flag){
    if(n==1){
        if(!flag)return 1;
        else return 0;
    }else if(flag){
        return f(n-1,x,y,true)+x*f(n,x,y,false);
    }else{
        return f(n-1,x,y,true)+y*f(n-1,x,y,false);
    }
}

int main(){
    int n,x,y;
    cin >> n >> x >> y;
    ll ans=f(n,x,y,true);
    cout << ans << endl;
    return 0;
}