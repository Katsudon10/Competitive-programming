#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    if(n==100){
        cout << "Perfect" << endl;
    }else if(n>=90){
        cout << "Great" << endl;
    }else if(n>=60){
        cout << "Good" << endl;
    }else{
        cout << "Bad" << endl;
    }
    return 0;
}