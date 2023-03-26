/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll n;

void solve(){
    
}

int main(void){
    cin>>n;
    int gift=0;
	gift=2*(n/3);
	if(n%3>0)
		gift++;
	cout<<gift<<endl;
    return 0;
}