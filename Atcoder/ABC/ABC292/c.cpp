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

ll f(int x){
    ll res=0;
    for(int i=1;i*i<=x;i++){
        if(x%i!=0)continue;
        int j=x/i;
        if(i==j)res++;
        else res+=2;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    ll ans=0;
    
    for(int x=1;x<n;x++){
        int y=n-x;
        ans+=f(x)*f(y);
    }
    cout << ans << endl;
    return 0;
}