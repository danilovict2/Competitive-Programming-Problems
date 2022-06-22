/*sortbysecond*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,m;


void solve(){
    int a[m];
    int sum=0;
    for(int i=0;i<m;++i){
        a[i] = n/m;
        sum+=a[i];
    }
    int i=0;
    n-=sum;
    while(n>0){
        n--;
        a[i]++;
        i++;
    }
    for(int i=0;i<m;++i)cout<<a[i]<<" ";
}

int main(void){
    cin>>n>>m;
    solve();
    return 0;
}