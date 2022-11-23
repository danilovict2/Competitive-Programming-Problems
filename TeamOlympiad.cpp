/*sortbysec*/
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int n;

void solve(){
    vector<int> t1,t2,t3;
    int a;
    for(int i=0;i<n;++i){
        cin>>a;
        if(a==1)t1.push_back(i+1);
        else if(a==2)t2.push_back(i+1);
        else t3.push_back(i+1);
    }
    int ind1=0,ind2=0,ind3=0;
    int l=min({
        t1.size(),t2.size(),t3.size()
    });
    cout<<l<<endl;
    while(l--){cout<<t1[ind1]<<" "<<t2[ind2]<<" "<<t3[ind3]<<endl;ind1++;ind2++;ind3++;}
}   


int main(void){
	cin>>n;
    solve();
    return 0;
}

