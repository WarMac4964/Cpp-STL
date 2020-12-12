#include<iostream>
#include <list>
using namespace std;


template<class ForwardIterator, class T>
ForwardIterator search(ForwardIterator start,ForwardIterator end, T Key){
    while(start!=end){
        if(*start == Key){
            return start;
        }
        start++;
    }
    return end;
}

int main(){

    list<int> l;
    l.push_back(1);
    l.push_back(9);
    l.push_back(5);
    l.push_back(7);
    l.push_back(3);

    auto it = search(l.begin(),l.end(),5);
    if(it == l.end())
        cout<<"Not found";

    else
        cout<<*it<<endl;
    return 0;
}
