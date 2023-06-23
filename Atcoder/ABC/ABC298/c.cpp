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
    int n,q;
    cin >> n >> q;
    vector<vector<int>>card(200002,vector<int>());
    vector<vector<int>>box(n+1,vector<int>());
    rep(t,q){
        int query;
        cin >> query;
        if(query==1){
            int i,j;
            cin >> i >> j;
            card[i].push_back(j);
            box[j].push_back(i);
        }else if(query==2){
            int i;
            cin >> i;
            sort(ALL(box[i]));
            for(int v:box[i])cout << v << ' ';
            cout << endl;
        }else{
            int i;
            cin >> i;
            sort(ALL(card[i]));
            card[i].erase(unique(ALL(card[i])),card[i].end());
            for(int v:card[i])cout << v << ' ';
            cout << endl;
        }
    }
    return 0;
}