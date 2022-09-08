#include<iostream>
using namespace std;

class Base{
    public:
         int var_base;
         void display(){
             cout<<"displaying base calss variable var_base "<<var_base<<endl;
         }
};
 
class Derived: public Base{
    public:
        int var_derived;
        void display(){
            cout<<"displaying base class variable var_base "<<var_base<<endl;
            cout<<"displaying derived class variable var_derived "<<var_derived<<endl;
        }
};

int main(){
    
    Base *base_class_pointer;
    Derived obj_base;
    Base obj_derived;
    base_class_pointer= &obj_derived;

    base_class_pointer->var_base=32;
    // base_class_pointer->var_derived=12; // this will throw an error  
    base_class_pointer->display();

    base_class_pointer->var_base=3400;
    base_class_pointer->display();

    Derived *derived_class_pointer;
    derived_class_pointer= &obj_derived;
    derived_class_pointer->var_base=123;
    derived_class_pointer->var_derived=1223;
    derived_class_pointer->display();


   return 0;
}