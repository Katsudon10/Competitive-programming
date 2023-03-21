#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int x,y;
    cin >> x >> y;
    int a[]={1,3,1,2,1,2,1,1,2,1,2,1};
    if(a[x-1]==a[y-1]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}