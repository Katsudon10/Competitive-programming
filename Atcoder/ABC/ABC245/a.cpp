#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a<c){
        cout << "Takahashi" << endl;
        return 0;
    }else{
        if(a==c && b<=d){
            cout << "Takahashi" << endl;
            return 0;
        }
    }
    cout << "Aoki" << endl;
    return 0;
}