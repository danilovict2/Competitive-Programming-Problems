/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


int n;


void solve(){
    int curr = n%4;
    int a = (n+1)%4,a2 = (n+2)%4;
    if(curr == 1){
        cout<<0<<" A"<<endl;
    }else if(a == 1){
        cout<<1<<" A"<<endl;
    }else if(a2 == 1){
        cout<<2<<" A"<<endl;
    }else if(curr == 3){
        cout<<0<<" B"<<endl;
    }else if(a == 3){
        cout<<1<<" B"<<endl;
    }else if(a2 == 3){
        cout<<2<<" B"<<endl;
    }else if(curr == 2){
        cout<<0<<" C"<<endl;
    }else if(a == 2){
        cout<<1<<" C"<<endl;
    }else if(a2 == 2){
        cout<<2<<" C"<<endl;
    }else if(curr == 0){
        cout<<0<<" D"<<endl;
    }else if(a == 0){
        cout<<1<<" D"<<endl;
    }else if(a2 == 0){
        cout<<2<<" D"<<endl;
    }
}


int main(void){
    cin>>n;
    solve();
	return 0;
}
