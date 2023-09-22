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
    int h,w;
    cin >> h >> w;
    vector<string>s(h);
    rep(i,h)cin >> s[i];
    rep(i,h){
        rep(j,w){
            int cnt=0;
            if(s[i][j]=='#')cout << '#';
            else{
                if(i-1>=0){
                    if(j-1>=0 && s[i-1][j-1]=='#')cnt++;
                    if(s[i-1][j]=='#')cnt++;
                    if(j+1<w && s[i-1][j+1]=='#')cnt++;
                }
                if(j-1>=0 && s[i][j-1]=='#')cnt++;
                if(j+1<w && s[i][j+1]=='#')cnt++;
                if(i+1<h){
                    if(j-1>=0 && s[i+1][j-1]=='#')cnt++;
                    if(s[i+1][j]=='#')cnt++;
                    if(j+1<w && s[i+1][j+1]=='#')cnt++;
                }
                cout << cnt;
            }
        }
        cout << endl;
    }
    return 0;
}