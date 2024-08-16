#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int rv=0;
    cin>>n;
    while (n>0)
    {
        int ld=n%10;
        rv=(rv*10)+ld;
        n=n/10;       

    }
    cout <<rv;
    return 0;
}