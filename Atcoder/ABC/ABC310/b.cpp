#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
//using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>P(n),C(n);
    vector<vector<int>>F(n);
    rep(i,n){
        cin >> P[i] >> C[i];
        rep(j,C[i]){
            int f;
            cin >> f;
            F[i].push_back(f);
        }
    }

    rep(i,n){
        rep(j,n){
            if(P[i]>=P[j]){
                int cnt=0;
                bool flag=true;
                for(int v:F[i]){
                    if(find(ALL(F[j]),v)!=F[j].end())cnt++;
                    else flag=false;
                }
                cnt=F[j].size()-cnt;
                if(flag && (cnt>0 || P[i]>P[j])){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}