/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;

void solve(){
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a,a+n);
    int l = 0;
    for(int i=0;i<n;++i)if(a[i]<0){cout<<1<<" "<<a[i]<<endl;a[i]=0;break;}
    for(int i=0;i<n;++i){
        if(a[i]>0){
            cout<<1<<" "<<a[i]<<endl; 
            l++;
            a[i]=0;
            cout<<n-2<<" ";
            break;
        }else if(a[i]<0){
            if(a[i+1]<0){cout<<2<<" "<<a[i]<<" "<<a[i+1]<<endl;cout<<n-3<<" ";a[i]=0;a[i+1]=0;break;}
            
        }
    }
    
    for(int i=0;i<n;++i){
        if(a[i]>0 || a[i]<0)cout<<a[i]<<" ";
    }
    cout<<0<<endl;
}   

int main(void){
	cin>>n;
    solve();
    return 0;
}

