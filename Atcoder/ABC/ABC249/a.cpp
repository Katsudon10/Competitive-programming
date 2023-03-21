#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;
    int tx=0,ax=0;
    int time=x;
    while(time>0){
        tx+=b*min(a,time);
        time-=a;
        time-=c;
    }
    time=x;
    while(time>0){
        ax+=e*min(d,time);
        time-=d;
        time-=f;
    }
    if(tx==ax){
        cout << "Draw" << endl;
    }else if(tx>ax){
        cout << "Takahashi" << endl;
    }else if(ax>tx){
        cout << "Aoki" << endl;
    }
    
    
    return 0;
}