#include <bits/stdc++.h>
using namespace std;

void explainVector(){

    vector<int> v;// this creates an empty container
    v.push_back(1);
    v.push_back(10);
    v.push_back(20);
    v.push_back(40);
    v.emplace_back(12);
    cout << v[0];// cannot directly print an array , we need print using index no
    cout << endl;
    cout << v[1];

    // inserting pair 
    vector<pair<int,int>>vec;
    vec.push_back({13,40});
    vec.emplace_back(45,89);

    cout << vec[0].first;
    cout << endl;
    cout << vec[1].second;

    vector<int>v1(5,100);//conatiner with 5 elements
    cout << v1[1] << endl;//accessing the 1st index element
    

    vector<int>v2(5);//create an conatiner with 5 empty elements

    vector<int>v3(v1);// create an copy of the container

    //vector with iterator
    vector<int>::iterator it=v.begin();
    it++;
    cout <<"Iterator" <<*(it) << "" << endl;
    it=it+3;
    cout <<*(it) << endl;

    vector<int>::iterator it1=v.end();// This points to the last element +1

    cout <<v.back();//last element

    for(vector<int>::iterator it2=v3.begin();it2!=v3.end();it2++){
        cout << *(it2) << " ";
        cout << endl;
    }

    for(auto it4=v3.begin();it4!=v3.end();it4++){
        cout << *(it4) <<" ";
    }

    // for each
    for(auto it5 :v3){
        cout << it5 <<" ";
    }

    //Erase || Delete a Vector
    v3.erase(v.begin()+1);
    //start to end
    v3.erase(v.begin()+2,v.begin()+4);// range start to end

    //insert 
    vector<int>v7(2,100);
    v7.insert(v7.begin(),300);
    v7.insert(v7.begin()+1,2,700);
    for (auto it6:v7){
        cout <<endl <<"Insert" << it6 <<"-" <<v7.size() <<endl;
    }
    
    //last element
    cout << v7.pop_back();
    v1.swap(v2);
    v1.clear();//clears the container
    v1.empty(); ///check whether the conytainer is empty is not.


}

int main(){
    explainVector();
    return 0;
}