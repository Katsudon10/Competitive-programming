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
    n=n*(n+1)/2;
    if(n==1){
        cout << "BOWWOW" << endl;
        return 0;
    }
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            cout << "BOWWOW" << endl;
            return 0;
        }
    }
    cout << "WANWAN" << endl;
    return 0;
}