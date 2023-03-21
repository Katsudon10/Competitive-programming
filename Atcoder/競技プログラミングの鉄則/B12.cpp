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
    double right=100,left=0;
    double mid;
    rep(i,20){
        mid=right+(left-right)/2.0;
        double x=mid*mid*mid+mid;
        
        if(x>n*1.0)right=mid;
        if(x<n)left=mid;
    }
    cout << fixed << setprecision(10) << mid << endl;
    return 0;
}