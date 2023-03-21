#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    int q;
    cin >> q;
    rep(i,q){
        int num;
        int k,x;
        cin >> num;
        if(num==1){
            cin >> k >> x;
            a[k-1]=x;
        }else if(num==2){
            cin >> k;
            cout << a[k-1] << endl;
        }
    }
    return 0;
}