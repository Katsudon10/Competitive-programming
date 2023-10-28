#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int check(int n){
    int a=n/100;
    n%=100;
    int b=n/10;
    n%=10;
    int c=n;
    return a*b==c;
}

int main(){
    int n;
    cin >> n;
    while(true){
        if(check(n)){
            cout << n << endl;
            return 0;
        }
        n++;
    }
    return 0;
}