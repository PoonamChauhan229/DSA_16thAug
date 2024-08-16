#include <bits/stdc++.h>
using namespace std;

void nameNTimes(int i, int n){
    if(i>n) return;
    cout << "Poonam" <<endl;
    nameNTimes(i+1,n);
}
int main(){
    int n;
    cin>>n;
    nameNTimes(1,n);
    return 0;
}