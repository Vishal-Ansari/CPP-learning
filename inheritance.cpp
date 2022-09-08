#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    float salary;
        Employee(){};
        Employee(int inpid){
            id=inpid;
            salary=34.0;
        }
};

class programmer: public Employee{
    public:
    programmer(int inid){
        id=inid;
    }
    int languagecode=9;
};

int main(){
    Employee  e1(1),e2(2);
    cout<<" the salary  of first employee is "<<e1.salary<<endl;
    cout<<" the id of first employee is "<<e1.id<<endl;
    
    cout<<" the salary  of second employee is "<<e2.salary<<endl;
    cout<<" the id of second employee is  " <<e2.id<<endl;
    programmer skillf(5);
    cout<<" the labguage code for the programmer is "<<skillf.languagecode<<endl;
    cout<<" the id for the programmer is "<<skillf.id<<endl;

   return 0;
}