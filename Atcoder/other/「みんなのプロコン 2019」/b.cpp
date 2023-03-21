#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int num[4]={0};
    rep(i,3){
        int a,b;
        cin >> a >> b;
        num[a-1]++;
        num[b-1]++;
    }
    rep(i,4){
        if(num[i]==3){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}