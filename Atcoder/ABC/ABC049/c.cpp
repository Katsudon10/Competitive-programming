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
    string s;
    cin >> s;
    vector<string>t={"dream","dreamer","erase","eraser"};

    reverse(ALL(s));
    rep(i,4)reverse(ALL(t[i]));
    int i=0;
    while(i<s.size()){
        bool flag=false;
        rep(j,4){
            if(s.substr(i,t[j].size())==t[j]){
                i+=t[j].size();
                flag=true;
                break;
            }
        }
        if(!flag){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}