/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll t;
ll n;


void solve(){
		cin >> n;
		int cnt2 = 0, cnt3 = 0;
		while (n % 2 == 0) {
			n /= 2;
			++cnt2;
		}
		while (n % 3 == 0) {
			n /= 3;
			++cnt3;
		}
		if (n == 1 && cnt2 <= cnt3) {
			cout << 2 * cnt3 - cnt2 << endl;
		} else {
			cout << -1 << endl;
		}
}

int main(void){
	cin>>t;
	while(t--)solve();
    return 0;
}