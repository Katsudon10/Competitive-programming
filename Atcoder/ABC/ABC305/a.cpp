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
    if(n%5==0){
        cout << n << endl;
    }else{
        int m=n%10;
        if(m<3){
            cout << 5*(n/5) << endl;
        }else if(m<5){
            cout << 5*(n/5+1) << endl;
        }else if(m<8){
            cout << 5*(n/5) << endl;
        }else{
            cout << 5*(n/5+1) << endl;
        }
    }
    return 0;
}