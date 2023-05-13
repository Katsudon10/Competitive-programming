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
    string s;
    cin >> n >> s;
    int cntA=0,cntT=0;
    for(char c:s){
        if(c=='T')cntT++;
        else cntA++;
    }
    if(cntA>cntT){
        cout << 'A' << endl;
    }else if(cntT>cntA){
        cout << 'T' << endl;
    }else{
        if(s.rfind('T')>s.rfind('A')){
            cout << 'A' << endl;
        }else{
            cout << 'T' << endl;
        }
    }
    return 0;
}