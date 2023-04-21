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
    bool N=false,S=false,W=false,E=false;
    for(char c:s){
        if(c=='N')N=true;
        if(c=='S')S=true;
        if(c=='W')W=true;
        if(c=='E')E=true;
    }

    if((N && !S) || (!N && S)){
        cout << "No" << endl;
    }else if((W && !E) || (!W && E)){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}