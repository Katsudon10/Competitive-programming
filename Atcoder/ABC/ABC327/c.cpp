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
    vector<vector<int>>a(9,vector<int>(9));
    rep(i,9)rep(j,9)cin >> a[i][j];
    
    rep(i,9){
        vector<bool>flag(10,false);
        rep(j,9){
            if(flag[a[i][j]]){
                cout << "No" << endl;
                return 0;
            }else{
                flag[a[i][j]]=true;
            }
        }
    }
    rep(j,9){
        vector<bool>flag(10,false);
        rep(i,9){
            if(flag[a[i][j]]){
                cout << "No" << endl;
                return 0;
            }else{
                flag[a[i][j]]=true;
            }
        }
    }
    int i=0,j=0;
    while(i<9 && j<9){
        vector<bool>flag(10,false);
        rep(k,3){
            rep(l,3){
                if(flag[a[i+k][j+l]]){
                    cout << "No" << endl;
                    return 0;
                }else{
                    flag[a[i+k][j+l]]=true;
                }
            }
        }
        i+=3;
        j+=3;
    }

    
    cout << "Yes" << endl;
    return 0;
}