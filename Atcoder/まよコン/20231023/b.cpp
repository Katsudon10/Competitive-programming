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
    string w;
    cin >> w;
    set<char>st;
    for(char c:w){
        if(st.count(c))st.erase(c);
        else st.insert(c);
    }
    if(st.size()==0)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}