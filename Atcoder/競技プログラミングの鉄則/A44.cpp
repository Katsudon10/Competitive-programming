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
    vector<int>A(n);
    rep(i,n)A[i]=i+1;
    int state=1;
    rep(i,q){
        int query;
        cin >> query;
        if(query==1){
            int x,y;
            cin >> x >> y;
            if(state==1)A[x-1]=y;
            else A[n-x]=y;
        }else if(query==2){
            if(state==1)state=2;
            else state=1;
        }else{
            int x;
            cin >> x;
            if(state==1)cout << A[x-1] << endl;
            else cout << A[n-x] << endl;
        }
    }
    return 0;
}