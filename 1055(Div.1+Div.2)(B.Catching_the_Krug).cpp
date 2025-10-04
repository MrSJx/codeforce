#include<bits\stdc++.h>
using namespace std;

int main(){
    int tc; cin>>tc;
    while(tc--){
        int n,a,b,p,o;cin>>n>>a>>b>>p>>o;
        if(n<=2){cout<<1<<"\n";}
        else{
        cout<<max(a,p)-min(a,p)+max(b,o)-min(b,o)<<"\n";
        }
    }
}