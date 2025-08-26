//A.Painting With Two Colors
#include <iostream> 
using namespace std; 

int main() {
    int u;cin>>u;
    while(u--){
        int n,a,b;cin>>n>>a>>b;
        if(n%2==0){
            if(a<=b){
                if(b%2==0){cout<<"YES\n";}
                else{cout<<"NO\n";}
            }
            else{
                if(a%2==0 and b%2==0){cout<<"YES\n";}
                else{cout<<"NO\n";}
            }
        }
        else{
            if(a<=b){
                if(b%2!=0){cout<<"YES\n";}
                else{cout<<"NO\n";}
            }
            else{
                if(a%2!=0 and b%2!=0){cout<<"YES\n";}
                else{cout<<"NO\n";}
            }
        }
    }
    return 0;
}