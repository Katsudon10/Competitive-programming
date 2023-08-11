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
    int q;
    cin >> q;
    rep(i,q){
        ll a,b,c;
        cin >> a >> b >> c;
        ll s=100*a+10*b+c;
        if(s%2==1){
            cout << "No" << endl;
        }else{
            ll x=s/2;
            x-=100*min(x/100,a);
            x-=10*min(x/10,b);
            if(x<=c) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}