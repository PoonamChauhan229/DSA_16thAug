#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0;
    cin >>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
              count++;
        }      
    }
    if(count==2){
        cout << "Prime No "<<n;
    }
    return 0;
}