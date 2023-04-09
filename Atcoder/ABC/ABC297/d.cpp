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
    ll a,b;
    cin >> a >> b;
    ll cnt=0;
    if(a<b)swap(a,b);
    while(a!=b){
        cnt+=a/b;
        a%=b;
        if(a<b)swap(a,b);
        if(b==1){
            cnt+=a-1;
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}