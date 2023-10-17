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
    int n,q;
    cin >> n >> q;
    set<int>st;
    int m=1;
    rep(i,q){
        int e;
        cin >> e;
        if(e==1){
            st.insert(m);
            m++;
        }else if(e==2){
            int x;
            cin >> x;
            st.erase(x);
        }else{
            cout << *st.begin() << endl;
        }
    }
    return 0;
}