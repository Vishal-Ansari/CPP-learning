#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    // Number(){} 
     // if the default constructor is not created then tha compiler will be confused which constructor it will use....
    Number(){ a=0;} // we can initialise the value of of a which will be default value...


        Number(int num){
            a=num;  
        }

// when no copy condtructr is found the compiler provides its on copy constructor
        Number(Number &obj){
            cout<<"copy constructor called out!!!!!"<<endl;
            a=obj.a;  
        }

        void dispaly(){
            cout<<"the number for the object is "<<a<<endl;
        }
};

int main(){
    Number x, y, z(7);
    x=Number(4);
    x.dispaly();
    y.dispaly();
    z.dispaly();

    // z1 should exactly resemble x,y,z so we will use copy constructor and pass the objct....
    Number z1(x);
    z1.dispaly();
   return 0;
}