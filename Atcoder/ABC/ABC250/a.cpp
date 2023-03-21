#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int h,w,r,c;
    cin >> h >> w >> r >> c;
    int ans=0;
    if(r-1>0) ans++;
    if(r+1<=h) ans++;
    if(c-1>0) ans++;
    if(c+1<=w) ans++;
    cout << ans << endl;
    return 0;
}