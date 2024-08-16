#include<bits/stdc++.h>
using namespace std;

void explainStack(){
    // LIFO  >> Last in First Out
    // push pop top only 3 major functions

    stack<int>st;
    st.push(1);//{1}
    st.push(2);//{1,2}
    st.push(3);//{1,2,3}
    st.push(4);//{1,2,3,4}
    st.emplace(5);//{1,2,3,4,5}

    cout <<st.top();//5

    cout <<st.size();//5

    st.pop();// 5 is removed from the top

    cout <<st.top();//4

    cout <<st.empty();//0 > NOt empty

   stack <int>st1,st2;
   st1.swap(st2); 

}

int main(){
    explainStack();
    return 0;
}