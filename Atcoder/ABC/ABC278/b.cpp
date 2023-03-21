#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

bool f(int h,int m){
    int h1=h/10*10+m/10;
    int m1=h%10*10+m%10;
    return h1<=23 && m1<=59;
}

int main(){
    int h,m;
    cin >> h >> m;
    while(!f(h,m)){
        m++;
        if(m==60){
            m=0;
            h++;
        }
        if(h==24)h=0;
    }
    cout << h << ' ' << m << endl;
    return 0;
}