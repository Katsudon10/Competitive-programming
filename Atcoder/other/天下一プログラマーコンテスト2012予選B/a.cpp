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
    int a,b,c;
    cin >> a >> b >> c;
    for(int i=1;i<=127;i++){
        if(i%3==a && i%5==b && i%7==c){
            cout << i << endl;
        }
    }
    return 0;
}