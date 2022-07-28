/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int m,d;

void solve(){
    
}


int main(void){
    cin>>m>>d;
    if(m == 4 || m == 6 || m == 9 || m==11){
        if(d==7)cout<<6<<endl;
        else cout<<5<<endl;
    }else if(m == 2){
        if(d == 1){
            cout<<4<<endl;
        }else{cout<<5<<endl;}
    }else{
        if(d<=5){
            cout<<5<<endl;
        }else cout<<6<<endl;
    }
	return 0;
}