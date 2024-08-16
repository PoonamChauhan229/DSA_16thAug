#include <bits/stdc++.h>
using namespace std;

void explainSet(){
    //Stores everything in sorted order and stores unique

    set<int>st;
    st.insert(1);//{1}
    st.insert(2);//{1,2}
    st.insert(2);//{1,2} NOt added -Keeps it unique
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}
    st.emplace(2);

    // Functionality of insert in vector can be used as well
    // to increase the efficiency.

    auto it=st.find(3);// returns an iterator which points to the 3

    auto it=st.find(6);//6 here no ? then it will returns set.end(), an iterator that points right after the end.

    st.erase(5)//erases 5;

  

    //closing at 41 min  

    auto it =st.find(3)// This returns an iterator which points to the 3

    auto it=st.find(6);// this element is not present so it will always return st.end() which points right after the end


    int cnt=st.count(1);// if it exists , it returns 1 and if doesnt it return 0.

    auto it1=st.find(2)// 2 iterator
    auto it2 =st.find(4) // 4 iterator

    st.erase(it1,it2)// after erase {1,4,5} it doesnt erases last ite element
    



}
int main(){
    explainSet();
    return 0;
}