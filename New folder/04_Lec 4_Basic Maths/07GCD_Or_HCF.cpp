#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin >>n1;
    cin>>n2;
    int gcd;
    for(int i=0;i<=n;i++){
        if(n%i==0){
            gcd=i;
        }
    }
    cout << gcd;
    return 0;
}