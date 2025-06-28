/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;

void solve(){
	int k,numOfTF = 0,numOfF = 0;
	cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k == 25) {
            numOfTF++;
        } else if (k == 50) {
            if (numOfTF >= 1) {
                numOfTF--;
                numOfF++;
            } else {
                cout << "NO"<<endl;
                return;
            }
        } else if (k == 100) {
            if (numOfF >= 1 && numOfTF >= 1) {
                numOfF--;
                numOfTF--;
            } else if (numOfF == 0 && numOfTF >= 3) {
                numOfTF -= 3;
            } else {
                cout << "NO"<<endl;
                return;
            }
        }
    }
    cout << "YES"<<endl;
}


int main(void){
	solve();
    return 0;
}

