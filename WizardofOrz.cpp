/*sortbysecond*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int t;
ll n;

void solve(){

    cin >> n;

    string s = "989";
    if (n <= 3){
        cout << s.substr(0, n) << endl;
		return;
	}

    cout << s;
    for (int i = 3; i < n; i++)
        cout << (i - 3)%10;
    cout << endl;

}

int main(void){
    cin>>t;
	while(t--)solve();
    return 0;
}