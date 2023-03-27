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
    int d=2025-n;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(i*j==d){
                cout << i << ' ' << 'x' << ' ' << j << endl;
            }
        }
    }
    return 0;
}