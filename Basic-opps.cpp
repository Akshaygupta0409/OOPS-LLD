#include <bits/stdc++.h> 

using namespace std;

class Person {
    public : 

    Person(string name , int a ) : name_(name) , a_(a) {}
    void SetName() {name_ = "akshay" ;}
    string GetName() {return name_ ;}

    private : 
    // member variable naming conventon ; keep them pivate insdustry standards
    int a_ ;
    string name_ ;
    string work_address_ ;
    float cgpa_ ;

};

int main(){
      
      



    cout << "akshay" << '\n';
    return 0;
}

/*
1. alwasys keep the constructor public 
2. default member access specifier of c++ is private



*/