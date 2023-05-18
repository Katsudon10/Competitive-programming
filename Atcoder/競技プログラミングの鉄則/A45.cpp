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

int main(){
    int n;
    char c;
    cin >> n >> c;
    vector<char>A(n);
    rep(i,n)cin >> A[i];
    int score=0;
    rep(i,n){
        if(A[i]=='W')score+=0;
        if(A[i]=='R')score+=1;
        if(A[i]=='B')score+=2;
    }
    if(score%3==0 && c=='W')cout << "Yes" << endl;
    else if(score%3==1 && c=='R')cout << "Yes" << endl;
    else if(score%3==2 && c=='B')cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}