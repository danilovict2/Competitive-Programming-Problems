/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

char s[101];


void solve(){
    for(int i=0;i<strlen(s);++i){
        s[i] = toupper(s[i]);
        if(s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U'||s[i] == 'Y'){
            continue;
        }else{
            s[i] = tolower(s[i]);
            cout<<"."<<s[i];
        }
    }
    cout<<endl;
}

int main(void){
    scanf("%s",s);
    solve();
	return 0;
}
