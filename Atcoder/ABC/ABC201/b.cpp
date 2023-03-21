#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
	int num;
	cin >> num;
	string str1,str2,str3;
	int a, b, c;
	cin >> str1 >> a;
	cin >> str2 >> c;
	if (a < c) {
		int temp;
		temp = a;
		a = c;
		c = temp;
		str2 = str1;
	}
	for (int i = 0; i < num - 2; i++) {
		cin >> str3 >> b;
		if (b > a) {
			c = a;
			a = b;
			str2 = str1;
			str1 = str3;
		}
		else if (b > c) {
			c = b;
			str2 = str3;
		}
	}
	cout << str2 << endl;
    return 0;
}