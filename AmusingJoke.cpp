/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

string s1,s2,s3;


void solve(){
    
    
}

int main(void){
    cin>>s1>>s2>>s3;
    s1+=s2;
    sort(s1.begin(),s1.end());
    sort(s3.begin(),s3.end());
    if(s1 == s3)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}