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
    vector<int>a(n,0);
    rep(i,q){
        int c,x;
        cin >> c >> x;
        if(c==1)a[x-1]++;
        if(c==2)a[x-1]+=2;
        if(c==3){
            if(a[x-1]>=2){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}