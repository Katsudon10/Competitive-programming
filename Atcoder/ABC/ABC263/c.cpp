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
    int n,m;
    cin >> n >> m;
    vector<int>A;
    rep(i,n)A.push_back(0);
    rep(i,m-n)A.push_back(1);
    do{
        rep(i,A.size()){
            if(A[i]==0)cout << i+1 << ' ';
        }
        cout << endl;
    }while(next_permutation(ALL(A)));
    return 0;
}