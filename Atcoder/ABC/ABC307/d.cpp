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
    string s;
    cin >> s;
    stack<char>st;
    int flag=false;
    rep(i,n){
        if(s[i]=='('){
            st.push('(');
            flag++;
        }else if(s[i]==')'){
            if(flag>0){
                while(st.top()!='('){
                    st.pop();
                }
                st.pop();
                flag--;
            }else{
                st.push(')');
            }
        }else{
            st.push(s[i]);
        }
    }
    string ans;
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ALL(ans));
    cout << ans << endl;
    return 0;
}