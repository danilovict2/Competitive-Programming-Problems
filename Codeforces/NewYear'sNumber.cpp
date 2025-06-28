/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t,n;


void solve(){
	cin >> n;
    int cnt2021 = n % 2020;
    int cnt2020 = (n - cnt2021) / 2020 - cnt2021;
    if (cnt2020 >= 0 && 2020 * cnt2020 + 2021 * cnt2021 == n) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
}


int main(void){
  	cin >> t;
  	while (t--)solve();
    return 0;
}
