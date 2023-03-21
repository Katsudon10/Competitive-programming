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
    int a,b;
    cin >> a >> b;
    if(abs(a)<abs(b)){
        cout << "Ant" << endl;
    }else if(abs(a)>abs(b)){
        cout << "Bug" << endl;
    }else{
        cout << "Draw" << endl;
    }
    return 0;
}