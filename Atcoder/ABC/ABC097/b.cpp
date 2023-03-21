#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int x;
    cin >> x;
    int ans=1;
    for(int b=2;b<x;b++){
        int y=b*b;
        while(y<=x){
            ans=max(ans,y);
            y*=b;
        }
    }
    cout << ans << endl;
    return 0;
}