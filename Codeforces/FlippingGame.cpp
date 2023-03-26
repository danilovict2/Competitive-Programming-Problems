/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


int n;

void solve(){
    int a, count1(0), extra0(0), extra0max(-1);
    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            count1 += 1;
            if (extra0 > 0)
            {
                extra0 -= 1;
            }
        }
        else
        {
            extra0 += 1;
            if (extra0 > extra0max)
            {
                extra0max = extra0;
            }
        }
    }
    cout << count1 + extra0max << endl;
}


int main(void){
    cin>>n;
    solve();
}
