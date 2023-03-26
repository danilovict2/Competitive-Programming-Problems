/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n,k;

void solve(){
    cin>>n>>k;
    int a[n],res=0;
    bool b = true;
    vector <int> v;
    for(int i=0;i<n;++i){
        b=true;
        cin>>a[i];
        for(int j=0;j<i;++j){
            if(a[i] == a[j]){
                b=false;break;
            }
        }
        if(b){res++; v.push_back(i+1);}
    }
    if(res>=k){
        cout<<"YES"<<endl;
        for(int i=0;i<k;++i)cout<<v[i]<<" ";
        cout<<endl;
    }else cout<<"NO"<<endl;

}   

int main(void){
	solve();
    return 0;
}

