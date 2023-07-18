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
    long long int ans=0;
    cin >> n;
    queue<int>que;
    rep(i,n){
        int num;
        cin >> num;
        if(num==1){
            int x,c;
            cin >> x >> c;
            rep(i,c) que.push(x);
        }else{
            int c;
            cin >> c;
            ll ans=0;
            rep(i,c){
                ans+=que.front();
                que.pop();
            }
            cout << ans << endl;
        }
    }
    
    return 0;
}