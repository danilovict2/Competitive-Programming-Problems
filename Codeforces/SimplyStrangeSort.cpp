/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,t;

void solve(){
    cin>>n;
    vector <int> a(n);
    for(auto &x:a)cin>>x;
    
    int ans = 0;
    while (!is_sorted(a.begin(), a.end())) {
      for (int i = ans % 2; i + 1 < n; i += 2) {
        if (a[i] > a[i + 1]) {
          swap(a[i], a[i + 1]);
        }
      }
      ans++;
    }
    cout<<ans<<endl;
}   

int main(void){
	cin>>t;
    while(t--)solve();
    return 0;
}

