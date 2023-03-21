#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int H,W,h,w;
    cin >> H >> W >> h >> w;
    cout << H*W-h*W-w*H+h*w << endl;
    return 0;
}