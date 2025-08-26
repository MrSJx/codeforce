#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n; long arr[n];
        for(int i=0;i<n;i++){cin>>arr[i];}
        long int count=0;
        long int c=arr[n-1];
        for(int i=1;i<n;i+=2){
            count+=max(arr[i-1],arr[i]);
        }
        if(sizeof(arr)/sizeof(arr[1])%2!=0){count+=c;}
        cout<<count<<"\n";
    }
}