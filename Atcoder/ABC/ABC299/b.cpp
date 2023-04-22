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
    int n,t;
    cin >> n >> t;
    vector<int>C(n),R(n);
    rep(i,n)cin >> C[i];
    rep(i,n)cin >> R[i];
    int win=-1,num=-1;
    rep(i,n){
        if(C[i]==t){
            if(R[i]>num){
                swap(R[i],num);
                win=i+1;
            }
        }
    }
    if(win!=-1){
        cout << win << endl;
        return 0;
    }

    win=1;
    num=R[0];

    for(int i=1;i<n;i++){
        if(C[i]==C[0] && R[i]>num){
            swap(num,R[i]);
            win=i+1;
        }
    }
    cout << win << endl;
    return 0;
}