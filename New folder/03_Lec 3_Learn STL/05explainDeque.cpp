#include<bits/stdc++.h>
using namespace std;


void explainDeque(){
    //similar to list and vector
    deque<int>dq;
    dq.push_back(1) //{1}
    dq.emplace_back(2)//{1,2}

    dq.push_front(3)//{3,1,2}
    dq.emplace_front(4)//{4,3,1,2}

    dq.pop_back()//{4,3,1}
    dq.pop_front()//{3,1}

    dq.back();
    dq.front();

    //rest functions are similar as vector
}
int main(){
    explainDeque();
    return 0;
}