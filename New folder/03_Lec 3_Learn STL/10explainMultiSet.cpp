#include<bits/stdc++.h>
using namespace std;


void explainMultiSet(){
    //Everything is same 
    // it stores duplicate elements also

    multiset<int>ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}
    ms.erase(1)// all 1s are erased

    int cnt.ms.count(1)// it will count all 1s

    // only 1 occurence of 1 will be deleted
    ms.erase(ms.find(1));

    ms.erase(ms.find(1),ms.find(1)+2)// delete multi occurences


}

void explainUSet(){
    unordered set<int> st;
    // stores in randomized order uniquely
    // rest all is same as set
}
int main(){
    explainMultiSet();
    return 0;
}