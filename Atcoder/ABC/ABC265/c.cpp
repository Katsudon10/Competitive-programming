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
    int h,w;
    cin >> h >> w;
    vector<string>G(h);
    rep(i,h)cin >> G[i];

    Graph seen(h,vector<int>(w,false));

    int i=0,j=0;
    while(1){
        if(seen[i][j]){
            cout << -1 << endl;
            return 0;
        }

        if(G[i][j]=='U' && i!=0){
            seen[i][j]=true;
            i--;
        }else if(G[i][j]=='D' && i!=h-1){
            seen[i][j]=true;
            i++;
        }else if(G[i][j]=='L' && j!=0){
            seen[i][j]=true;
            j--;
        }else if(G[i][j]=='R' && j!=w-1){
            seen[i][j]=true;
            j++;
        }else{
            break;
        }
    }
    cout << i+1 << ' ' << j+1 << endl; 
    return 0;
}