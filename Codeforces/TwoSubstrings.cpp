/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

string s;

void solve(){
    int x1=s.find("AB");
    int x2=s.find("BA",x1+2);
    int y1=s.find("BA");
    int y2=s.find("AB",y1+2);
    if((x1!=-1 && x2!=-1)  || (y1!=-1 && y2!=-1)){
        cout<<"YES"<<endl;
    }else
    cout<<"NO"<<endl;
}   

int main(void){
	cin>>s;
    solve();
    return 0;
}

