/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll n;

void solve(){
    int s;
    int count[5] = {0};
    while (n--)
    {
        cin>>s;
        count[s]++;
    }
    int total = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];
    if (count[2] % 2 == 1)
    {
        total++;
        count[1] -= 2;
    }
    if (count[1] > 0)
    {
        total += (count[1] + 3) / 4;
    }
    cout<<total<<endl;
}

int main(void){
    cin>>n;
    solve();
    return 0;
}