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
    int n;
    cin >> n;
    int cx=0,cy=0;
    rep(i,n){
        int x,y;
        cin >> x >> y;
        cx+=x;cy+=y;
    }
    if(cx>cy)cout << "Takahashi" << endl;
    else if(cx==cy)cout << "Draw" << endl;
    else cout << "Aoki" << endl;
    return 0;
}
