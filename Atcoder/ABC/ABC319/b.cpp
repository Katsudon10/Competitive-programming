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
    string ans;
    rep(i,n+1){
        bool flag=false;
        for(int j=1;j<10;j++){
            if(n%j==0 && i%(n/j)==0){
                cout << j;
                flag=true;
                break;
            }
        }
        if(!flag)cout << '-';
    }
    cout << endl;
    return 0;
}