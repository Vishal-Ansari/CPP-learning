#include<iostream>
using namespace std;

int count =0;

class num{
    public:
     num(){
         count++;
         cout<<"this is the time when constructor is called for object number  "<<count<<endl;
     }

      ~num(){
          cout<<"this is the time when the destrcutor is called for object number  "<<count<<endl;
          count--;
      }
};

int main(){
    cout<<"we are in are main function "<<endl;
    cout<<"creating our first object n1"<<endl;
    num n1;
    {
        cout<<"entering into our block "<<endl;
        cout<<"creating two more objects "<<endl;
        num n2, n3;
        cout<<"exiting into our block "<<endl;
    }
    cout<<"back to main function"<<endl;
    
   return 0;
}