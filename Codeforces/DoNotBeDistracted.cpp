/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,t;
string s;

void solve(){
    cin >> n;
    cin >> s;
    for (char c = 'A'; c <= 'Z'; c++) {
        int first = n;
        int last = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                first = min(first, i);
                last = max(last, i);
            }
        }
        for (int i = first; i <= last; i++) {
            if (s[i] != c) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main(void){
    cin>>t;
	while(t--)solve();
	return 0;
}
