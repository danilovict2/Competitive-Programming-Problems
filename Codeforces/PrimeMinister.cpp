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
    int ttl = 0;
    for(int i=0;i<n;++i){cin>>a[i]; ttl+=a[i];}
    vector <int> col;
    col.push_back(1);
    int colt = a[0];
    for(int i=1;i<n;++i){
        if(a[0]/2>=a[i]){
            colt+=a[i];
            col.push_back(i+1);
        }
    }
    if(colt>ttl/2){
        cout<<col.size()<<endl;
        for(int i=0;i<col.size();++i){
            cout<<col[i]<<" ";
        }
    }else{
        cout<<0<<endl;
    }
}

int main(void){
    cin>>n;
    solve();
    return 0;
}