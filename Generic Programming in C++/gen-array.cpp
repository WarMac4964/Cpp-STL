#include<iostream>
using namespace std;

template<typename T>
//Linear Search
int search(T a[],int n, T key){
  for(int i = 0;i<n;i++){
    if(a[i]==key){
      return i+1;
    }
  }
  return -1;
}

int main(){
  int a[] = {1,2,3,4,10,12};
  int n = sizeof(a)/sizeof(int);
  int key = 10;

  cout<<search(a,n,key)<<endl;

  float b[] = {1.1,1.2,1.3};
  float k = 1.2;
  cout<<search(b,3,k)<<endl;

  char c[] = {'A','b','C','d'};
  char k2 = 'A';
  cout<<search(c,4,k2)<<endl;
  return 0;
}
