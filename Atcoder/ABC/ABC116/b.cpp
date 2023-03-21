#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)
int f(int n){
    if(n%2==0){
        return n/2;
    }else{
        return 3*n+1;
    }
}

int main(){
    int s;
    cin >> s;
    set<int>n;
    int num=s;
    int i=1;
    while(true){
        if(n.find(num)!=n.end()){
            cout << i << endl;
            return 0;
        }else{
            n.insert(num);
        }
        i++;
        num=f(num);
    }
    return 0;
}