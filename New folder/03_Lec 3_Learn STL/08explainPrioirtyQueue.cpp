#include<bits/stdc++.h>
using namespace std;

void explainPriorityQueue(){
    // largest value stays at the start
    //Maximum heap
    priority_queue<int>pq;
    pq.push(1);//{1}
    pq.push(3);//{3,1}
    pq.push(10);//{10,3,1}
    pq.push(2);//{10,3,2,1} // by itself it get arranged inside it.

    cout << pq.top();//10

    pq.pop();// 10 is removed || removed from the top
    cout << pq.top();//3

    //Minimum Elemnet at the top
    //Minimum Heap

    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(3);//{3}
    pq1.push(1);//{1,3}
    pq1.push(4);//{1,3,4}
    pq1.push(2);//{1,2,3,4}
    pq1.emplace(5);
    cout << pq1.top();//1


    //push logn
    //pop  logn
    //top 0(1)

}
int main(){
    explainPriorityQueue();
    return 0;
}