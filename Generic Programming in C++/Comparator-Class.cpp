#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;

class Book{
public:
    string name;
    int price;
    Book() {

    }
    Book(string name,int price){
        this->name = name;
        this->price = price;
    }
};
class BookCompare{
public:
    bool operator()(Book A, Book B){
         if(A.name == B.name){
             return true;
         }
         return false;
    }
};


template<class ForwardIterator, class T,class Compare>
ForwardIterator search(ForwardIterator start,ForwardIterator end, T Key,Compare cmp){
    while(start!=end){
        if(cmp(*start,Key)){
            return start;
        }
        start++;
    }
    return end;
}

int main(){
    Book b1("C++",100);
    Book b2("Java",110);
    Book b3("Python",120);
    Book b4(b1);

    list<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);

    Book booktofind("C++",110);
    BookCompare cmp;

    auto it = search(l.begin(),l.end(),booktofind,cmp);
    if(it != l.end()){
        cout<<"Book found in the library \n";
    }
    else{
        cout<<"Not Found";
    }


    //    if(cmp(b1,booktofind)){
//        cout<<"Same Books"<<endl;
//    }
    return 0;
}
