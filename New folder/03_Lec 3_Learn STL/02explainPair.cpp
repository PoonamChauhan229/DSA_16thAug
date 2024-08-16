#include <bits/stdc++.h>
using namespace std;

void explainPair(){

    pair<int,int> p={1,3};
    cout << p.first;
    cout << p.second;

    pair<int, pair<int,int>> q={1,{3,4}};
    cout <<q.first;
    cout <<q.second.first;
    cout <<q.second.second;

    pair<int,int> arr[]={{1,3},{2,3},{4,5},{89,90}};

    cout << "Array Element" <<arr[3].first;
}

int main(){
    explainPair();
    return 0;
}