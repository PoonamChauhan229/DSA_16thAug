#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int rv=0;
    int temp=n;
    while(n>0){
        int ld=n%10;
        rv=(rv*10)+ld;
        n=n/10;
    }
    if(temp==rv){
        cout << temp <<"==" <<rv <<"Palindrome Number";
    }

    return 0;
}