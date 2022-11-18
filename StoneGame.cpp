/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
int n;

void solve(){
    cin >> n;
    vector<int> v(n);
    for (int &e : v) {
        cin >> e;
    }
    int maxPos = max_element(v.begin(), v.end()) - v.begin();
    int minPos = min_element(v.begin(), v.end()) - v.begin();
    cout << min({
            max(maxPos, minPos) + 1,
            (n - 1) - min(maxPos, minPos) + 1,
            (n - 1) - maxPos + minPos + 2,
            (n - 1) - minPos + maxPos + 2
    }) << "\n";
}

int main(void){
    cin >> t;
    while (t--)
        solve();
    return 0;
}