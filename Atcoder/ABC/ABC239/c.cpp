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
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for(int x=x1-2;x<x1+3;x++){
        for(int y=y1-2;y<y1+3;y++){
            ll d1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
            ll d2=(x-x2)*(x-x2)+(y-y2)*(y-y2);
            if(d1==5 && d2==5){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}