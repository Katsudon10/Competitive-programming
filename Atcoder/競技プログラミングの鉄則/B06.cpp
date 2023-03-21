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
    vector<int>A(n+1,0);
    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        A[i]=A[i-1]+a;
    }
    int q;
    cin >> q;
    rep(i,q){
        int l,r;
        cin >> l >> r;
        int d=r-l+1;
        if(2*(A[r]-A[l-1])>d){
            cout << "win" << endl;
        }else if(2*(A[r]-A[l-1])==d){
            cout << "draw" << endl;
        }else{
            cout << "lose" << endl;
        }
    }
    return 0;
}