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
    int n,q;
    cin >> n >> q;
    set<P>f;
    rep(i,q){
        int t,a,b;
        cin >> t >> a >> b;
        if(t==1){
            f.insert(P(a,b));
        }else if(t==2){
            f.erase(P(a,b));
        }else{
            if(f.count(P(a,b)) && f.count(P(b,a))){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}