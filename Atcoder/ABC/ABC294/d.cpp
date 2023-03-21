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
    set<int>s;
    int num=1;
    rep(i,q){
        int x;
        cin >> x;
        if(x==1){
            s.insert(num);
            num++;
        }else if(x==2){
            int t;
            cin >> t;
            s.erase(t);
        }else if(x==3){
            cout << *s.begin() << endl;
        }
    }
    return 0;
}