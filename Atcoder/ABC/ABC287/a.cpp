#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
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
    int num=0;
    rep(i,n){
        string s;
        cin >> s;
        if(s=="For")num++;
    }
    if(num>n/2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}