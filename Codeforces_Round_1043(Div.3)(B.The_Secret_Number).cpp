//B.The_Secret_Number
#include<iostream>
using namespace std;

int main(){
    int n;
    long long int arr[n];
    for(int i=0; i,n; i++){cin >> arr[i];}
    for(int i=0; i<n; i++){
        int x=0,k=0;
        for(int j=11; j<arr[i]; j++){
            long long int arr1[11];
            if(x==(arr[i]-j)/11){
                k++;
                arr1.push_back(x);
            }
        }
        if(k!=0){cout << k << "\n";}
    }
}