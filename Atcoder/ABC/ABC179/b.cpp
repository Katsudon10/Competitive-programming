#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    int flag=0;
    rep(i,n){
        int d1,d2;
        cin >> d1 >> d2;
        if(d1==d2){
            flag++;
            if(flag==3){
                cout << "Yes" << endl;
                return 0;
            }
        }else{
            flag=0;
        }
    }
    cout << "No" << endl;
    return 0;
}