#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    int h,m,s;
    h=n/3600;
    n-=h*3600;
    m=n/60;
    n-=m*60;
    s=n;
    string hh,mm,ss;
    if(h<10){
        hh='0'+to_string(h);
    }else{
        hh=to_string(h);
    }
    if(m<10){
        mm='0'+to_string(m);
    }else{
        mm=to_string(m);
    }
    if(s<10){
        ss='0'+to_string(s);
    }else{
        ss=to_string(s);
    }
    cout << hh << ':' << mm << ':' << ss << endl;
    return 0;
}