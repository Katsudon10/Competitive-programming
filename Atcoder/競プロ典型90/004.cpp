#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>>A(h,vector<int>(w));
    rep(i,h)rep(j,w){
        cin >> A[i][j];
    }
    vector<int>line(h),collum(w);
    rep(i,h)rep(j,w){
        line[i]+=A[i][j];
        collum[j]+=A[i][j];
    }
    rep(i,h){
        rep(j,w){
            if(j!=w-1){
                cout << line[i]+collum[j]-A[i][j] << ' ';
            }else{
                cout << line[i]+collum[j]-A[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}