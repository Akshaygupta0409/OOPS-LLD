#include <bits/stdc++.h> 

using namespace std;

class Person {
  public :
  Person(int a){
      cout << "contructro is here ";
      a_ = a;
  }
 ~Person(){
    cout << "destuctor is here" ;
 }


  private :
  int a_ ;

};

int main(){
      
      Person p(8);




    cout << "akshay" << '\n';
    return 0;
}

/*
1. alwasys keep the constructor public 
2. default member access specifier of c++ is private



*/