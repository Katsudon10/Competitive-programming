#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int ac=abs(a-c);
    int ab=abs(a-b);
    int bc=abs(b-c);
    if(ac<=d){
        cout << "Yes" << endl;
    }else if(ab<=d && bc<=d){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}