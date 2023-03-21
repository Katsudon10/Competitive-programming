#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>>a(h,vector<int>(w));
    rep(i,h)rep(j,w)cin >> a[i][j];
    bool ans=0;
    for(int i=0;i<h;i++){
        for(int j=i+1;j<h;j++){
            for(int k=0;k<w;k++){
                for(int l=k+1;l<w;l++){
                    if(a[i][k]+a[j][l]>a[j][k]+a[i][l]){
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    
    cout << "Yes" << endl;
    
    return 0;
}