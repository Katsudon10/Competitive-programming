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
    int n,x;
    cin >> n >> x;
    string A;
    cin >> A;
    queue<int>que;
    que.push(x-1);
    A[x-1]='@';
    while(!que.empty()){
        int pos=que.front();
        que.pop();
        if(A[pos-1]=='.'){
            que.push(pos-1);
            A[pos-1]='@';
        }
        if(A[pos+1]=='.'){
            que.push(pos+1);
            A[pos+1]='@';
        }
    }
    cout << A << endl;
    return 0;
}