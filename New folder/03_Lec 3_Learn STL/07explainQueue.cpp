#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    //FIFO > First in First Out  example :Queue for ticketing
    queue<int>q;
    q.push(2);//{2}
    q.push(4);//{2,4}
    q.push(5);//{2,4,5}

    q.back()+=5;//5+5
    
    cout <<q.back();//10

    cout <<q.front();//2 

    q.pop();// 2 removed from the beigining

    cout <<q.front();//prints 4
}

int main(){
    explainQueue();
    return 0;
}