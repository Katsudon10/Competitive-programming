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
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    int cnt=0;
    while(a>=b){
        b*=2;
        cnt++;
    }
    while(b>=c){
        c*=2;
        cnt++;
    }
    if(cnt<=k){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}