#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp=n;
    int arms=0;
    while(n>0){
        int ld=n%10;
        arms=arms+(ld*ld*ld);
        n=n/10;
    }
    if(temp==arms){
        cout << temp<<"=="<<arms <<" ArmsStrong Number";
    } 
    return 0;
}