// A.Homework
#include<iostream>
using namespace std;

int main(){
    int n,k,l;
    cin >> n;
    string ks,ls,ss;
    for(int i=0; i<n; i++){
        cin >> k >> ks>>l>>ls>>ss;
        for(int j=0; j<l; j++){
            if(ss[j]=='D'){ks.push_back(ls[j]);}
            else{ks.insert(ks.begin(),ls[j]);}
        }
        cout << ks << "\n";
    }
    return 0;
}