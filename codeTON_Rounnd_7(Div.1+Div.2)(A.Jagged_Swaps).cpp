#include <bits\stdc++.h>
using namespace std;

int main(){
    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){cin>>arr[i];}
        vector<int> carr = arr;
        sort(carr.begin(), carr.end());
        if(arr[0]==1){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
}