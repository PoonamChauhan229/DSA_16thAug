#include <bits/stdc++.h>
using namespace std;

void explainMap(){
    map<int,int>mpp;
    map<int,pair<int,int>> mpp1;
    map<pair<int,int>,int> mpp2;
    
    mpp[1]=2;
    mpp.emplace({3,1})
    mpp.insert({2,4})
    mpp2.insert[{2,3}]=10;

// it stores in a sorted array of key
    //for each
    for(auto it:mpp){
        cout << it.first <<" " it.second
    }

    cout <<mpp[1]

    auto it=mpp.find(3);
    cout << *(it).second;

    auto it=mpp.find(5)// if its not found goes to the end
}
int main(){
    explainMap();
    return 0;
}