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
    vector<int>a(n);
    vector<string>s(n);
    rep(i,n)cin >> s[i] >> a[i];
    int id=-1,age=inf;
    rep(i,n){
        if(age>a[i]){
            age=a[i];
            id=i;
        }
    }
    rep(i,n){
        cout << s[(id+i)%n] << endl;
    }
    return 0;
}