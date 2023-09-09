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
    vector<vector<int>>c(3,vector<int>(3));
    rep(i,3)rep(j,3)cin >> c[i][j];
    int ans=3;
    rep(i,3){
        set<int>st;
        bool flag=true;
        rep(j,3){
            if(!st.count(c[i][j]))st.insert(c[i][j]);
            else{
                flag=false;
                break;
            }
        }
        if(!flag){
            ans--;
            break;
        }
    }
    rep(i,3){
        set<int>st;
        bool flag=true;
        rep(j,3){
            if(!st.count(c[j][i]))st.insert(c[j][i]);
            else{
                flag=false;
                break;
            }
        }
        if(!flag){
            ans--;
            break;
        }
    }
    rep(i,3){
        set<int>st;
        bool flag=true;
        rep(j,3){
            if(!st.count(c[(i+j)%3][j]))st.insert(c[(i+j)%3][j]);
            else{
                flag=false;
                break;
            }
        }
        if(!flag){
            ans--;
            break;
        }
    }
    cout << fixed << setprecision(20) << (double)ans/3 << endl;
    return 0;
}