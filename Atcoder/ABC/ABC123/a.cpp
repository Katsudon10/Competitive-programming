#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    vector<int>a(5);
    rep(i,5) cin >> a[i];
    int k;
    cin >> k;
    rep(i,4){
        for(int j=i+1;j<5;j++){
            if(a[j]-a[i]>k){
                cout << ":(" << endl;
                return 0;
            }
        }
    }
    cout << "Yay!" << endl;
    return 0;
}