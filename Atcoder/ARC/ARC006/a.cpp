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
    set<int>s;
    int b;
    rep(i,6){
        int e;
        cin >> e;
        s.insert(e);
    }
    cin >> b;
    int cnt=0;
    bool bonus=false;
    rep(i,6){
        int l;
        cin >> l;
        if(s.count(l))cnt++;
        if(l==b)bonus=true;
    }
    if(cnt==6){
        cout << 1 << endl;
    }else if(cnt==5 && bonus){
        cout << 2 << endl;
    }else if(cnt==5){
        cout << 3 << endl;
    }else if(cnt==4){
        cout << 4 << endl;
    }else if(cnt==3){
        cout << 5 << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}