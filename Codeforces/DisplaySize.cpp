/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll n;
int arr[1000000];
void solve(){
	int i,c,k;

        c = 0, k = 0;

        for (i=1; i<=n; i++)
        {
            if (n % i == 0)
            {
                arr[k] = i;
                k = k + 1;;
                c = c + 1;
            }
        }

        c--;

        if (c & 1)
            printf ("%d %d\n",arr[c/2],arr[c/2+1]);
        else
            printf ("%d %d\n",arr[c/2],arr[c/2]);
    
}

int main(void){
	cin>>n;    
	solve();
	return 0;
}