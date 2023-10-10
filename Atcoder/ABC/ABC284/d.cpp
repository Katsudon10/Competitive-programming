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
    int t;
    cin >> t;
    rep(i,t){
        ll n;
        cin >> n;
        ll p,q;
        for(ll i=2;i*i*i<=n;i++){
            if(n%i!=0)continue;
            if(n%(i*i)==0){
                p=i;
                q=n/i/i;
            }else{
                q=i;
                p=(ll)round(sqrt(n/i));
            }
            break;
        }
        cout << p << ' ' << q << endl;
    }
    return 0;
}