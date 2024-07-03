#include<bits/stdc++.h>

using namespace std;


// ans simple example of polymorshism 

class Animal{
  public :
    virtual void Sound(){
        cout << "Base class sound " << endl;
    }


};

// derived class from class animal 
// inheritance is from Base class --> derived class;  (very important) it means ;
// you cannot access derived class member_function from base class thats the reason to use 
// virtula keyword which will call the member_function of most derived class 
// example base---> derived_1 ----> derived_2 ------> call  of fucntion 3 ; 


class Cat : public Animal {
     public : 
      // keyword override is only used if you are sure that this fucnction will be overrided     
      void Sound() override { 
         cout << "Mewwwwww....... maauuuuu" << endl;
     }
};


class Dog : public Animal {
     public : 
      // keyword override is only used if you are sure that this fucnction will be overrided     
      void Sound() override { 
         cout << "Bhauuuuuuuuuu....... olly i love you bhauuuuuu........" << endl;
     }
};

// Generic function to call sound of different aimals;
void PrintSound(Animal &animal){
      animal.Sound();
}

int main(){
     Cat cat;
     Dog dog;
     Animal &derived_dog = dog;
     Animal &derived_cat = cat; 
     PrintSound(derived_cat);
     PrintSound(derived_dog);



    return 0;
}

