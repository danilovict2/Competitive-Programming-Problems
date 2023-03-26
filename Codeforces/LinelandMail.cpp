/*sortbysecond*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


void solve(){
    int n, max, min;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++){
		if (i == 0){
			min = a[1] - a[0];
			max = a[n - 1] - a[0];
		}
		else if (i == (n - 1)){
			min = a[n - 1] - a[n - 2];
			max = a[n - 1] - a[0];

		}
		else{
			min = a[i] - a[i - 1];
			if (a[i + 1] - a[i] < min){
				min = a[i + 1] - a[i];
			}

			max = a[n - 1] - a[i];
			if (a[i] - a[0] > max){
				max = a[i] - a[0];
			}

		}

		cout << min << " " << max << endl;
	}

}

int main(void){
    solve();
    return 0;
}