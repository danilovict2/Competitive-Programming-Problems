#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;


void solve(){
	int m;
	map<int,bool> mp;
	int a[n];
	for(int i=0;i<n;i++)
        cin>>a[i];

    m=0;
    for(int i=n-1;i>=0;i--)
    {
        if(mp[a[i]])
            a[i]=-1;
        else
        {
            mp[a[i]]=1;
            m++;
        }
    }

    cout<<m<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=-1)
            cout<<a[i]<<" ";
    }
    cout<<endl;
}

    

int main(void){
    cin>>n;
    solve(); 
    return 0;
}