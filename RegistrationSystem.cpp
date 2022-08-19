/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

string s;
ll n;

void solve(){
    map <string,int> db;
    for(int i=0;i<n;++i){
        cin>>s;
        if(db.count(s) == 0){
            cout<<"OK"<<endl;
            db[s] = 1;
        }else{
            cout<<s<<db[s]<<endl;
            db[s]++;
        }
    }
}

int main(void){
    cin>>n;
    solve();
    return 0;
}