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
    string s;
    cin >> s;
    string str[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    rep(i,7){
        if(s==str[i]){
            if(i>=5){
                cout << 0 << endl;
            }else{
                cout << 5-i << endl;
            }
        }
    }
    return 0;
}