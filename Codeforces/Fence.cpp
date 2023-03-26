/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,k;


void solve(){
	ll a[n+8]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i){
			a[i]=a[i-1]+a[i];
		}
	}
	
 
	int min=150000010;
	ll minindex=0;
	for(int i=0;i<=n-k;i++){
		ll sum=0;
		if(!i){
			sum=a[i+k-1];
 			if(sum<=min){
				min=sum;
				minindex=i;
		    }
		}
		else {
			sum=a[i+k-1]-a[i-1];
			if(sum<=min){
				min=sum;
				minindex=i;
			}
		}
	}
	cout<<++minindex<<endl; 
}


int main(void){
    cin>>n>>k;
    solve();
    return 0;
}
