#include <iostream>
using namespace std;

int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        int n;cin>>n;
        if(n==2){cout<<2<<"\n";}
        else if(n>=3&&n<=4){cout<<4<<"\n";}
        else if(n==5){cout<<5<<"\n";}
        else if(n>=6&&n<=8){cout<<6<<"\n";}
        else if(n>=9&&n<=16){cout<<7<<"\n";}
        else if(n>=17&&n<=24){cout<<8<<"\n";}
        else if(n>=25&&n<=40){cout<<9<<"\n";}
        else if(n>=41&&n<=65){cout<<10<<"\n";}
        else if(n>=66&&n<=128){cout<<11<<"\n";}
        else if(n>=129&&n<=356){cout<<12<<"\n";}
        else if(n>=357&&n<=449){cout<<13<<"\n";}
        else if(n>=450&&n<=500){cout<<14<<"\n";}
    }
    
}