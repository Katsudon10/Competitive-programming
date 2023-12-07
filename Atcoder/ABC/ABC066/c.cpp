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

int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    deque<int>deq;
    rep(i,n){
        if(i%2==0)deq.push_back(a[i]);
        else deq.push_front(a[i]);
    }
    rep(i,n){
        if(n%2==0){
            cout << deq.front() << ' ';
            deq.pop_front();
        }else{
            cout << deq.back() << ' ';
            deq.pop_back();
        }
        
    }
    cout << endl;
    return 0;
}