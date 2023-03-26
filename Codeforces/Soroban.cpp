/*sortbysecond*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

ll n;
const string combos[] = {"O-|-OOOO", "O-|O-OOO","O-|OO-OO","O-|OOO-O","O-|OOOO-","-O|-OOOO","-O|O-OOO","-O|OO-OO","-O|OOO-O","-O|OOOO-"};

void solve(){
    do{
        cout<<combos[n%10]<<endl;
        n/=10;
    }while(n!=0);
}

int main(void){
    cin>>n;
    solve();
    return 0;
}