/*sortbysecond*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;


void solve(){
    
}

int main(void){
    cin>>n;
	int cnto = 0;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		cnto += x & 1;
	}
	
	cout << min(cnto, n - cnto) << endl;
    return 0;
}