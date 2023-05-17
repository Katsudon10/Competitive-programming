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
    int n;
    cin >> n;
    vector<vector<int>>A(n,vector<int>(n));
    rep(i,n)rep(j,n)cin >> A[i][j];
    int q;
    cin >> q;
    vector<int>T(n);
    rep(i,n)T[i]=i;
    rep(i,q){
        int query,x,y;
        cin >> query >> x >> y;
        if(query==1){
            int tmp=T[x-1];
            T[x-1]=T[y-1];
            T[y-1]=tmp;
        }else{
            cout << A[T[x-1]][y-1] << endl;
        }
    }
    return 0;
}