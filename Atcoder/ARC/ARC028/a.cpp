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
    int n,a,b;
    cin >> n >> a >> b;
    while(n>0){
        if(n-a<=0){
            cout << "Ant" << endl;
            return 0;
        }
        n-=a;
        if(n-b<=0){
            cout << "Bug" << endl;
            return 0;
        }
        n-=b;
    }
    return 0;
}