/*sortbysecond*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;

void solve(){
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    int no = 0;
    for(int i=1;i<n-1;++i){
        if(a[i]<a[i-1]&&a[i]<a[i+1])++no;
        else if(a[i]>a[i-1]&&a[i]>a[i+1])++no;
    }
    cout<<no<<endl;
}

int main(void){
    cin>>n;
    solve();
    return 0;
}