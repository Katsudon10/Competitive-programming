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
    ll b;
    cin >> b;
    ll a=1;
    ll aa=a;
    while(aa<=b){
        if(aa==b){
            cout << a << endl;
            return 0;
        }else{
            a++;
            aa=1;
            rep(i,a){
                aa*=a;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}