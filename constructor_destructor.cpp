#include <bits/stdc++.h> 

using namespace std;

// exapmle one 


class Person {
  public :
  Person(int a){
      cout << "contructor is here \n"; // statemt 2
      a_ = a;
  }
 ~Person(){
    cout << "destuctor is here \n" ;  // statement 3;
 }


  private :
  int a_ ;

};




int main(){
      
    // example 1 
    Person p(8);
    // example 2 
    //   {
    //     Person p1(9);
    //   }

     

     cout << "out of scope " << '\n';  // statement 1;

    return 0;
}






/*
Learnings : 
Q when will destructor execute ?

A when the program reach to return satetement in main function or
  if the object if declared inside a scope in c++ example one;
  without scope example 2;
execution sequence for example 1;
2 -> 1 -> 3
execution sequence for example 2;
2 -> 3 -> 1;

Q what does destructor do ?
it relases the memory allocated to boject because there is no 




*/