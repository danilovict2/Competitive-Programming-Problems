/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
string a,b;

void solve(){
    cin>>a>>b;
    int n=a.size(),m=b.size();
    int ans;
    for (int len = 1; len <= min(n, m); len++) {
        for (int i = 0; i + len <= n; i++) {
            for (int j = 0; j + len <= m; j++) {
                if (a.substr(i, len) == b.substr(j, len)) {
                    ans = max(ans, len);
                }
            }
        }
    }
    cout << a.size() + b.size() - 2 * ans << "\n";
}   

int main(void){
	cin>>t;
    while(t--)solve();
    return 0;
}

