#include <bits/stdc++.h>
using namespace std;

void explainList(){
    // List is similar to Vector
    // it gives front operations as well
    // List is an container again dynamic like Vector

    list<int> ls;
    ls.push_back(2); //{2}
    ls.emplace_back(3);//{2,4}

    ls.push_front(5); //{5,2,4} cheap 
    //rest functions as vector  

}

int main(){
    explainList();
    return 0;
}
