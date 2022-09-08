#include<iostream>
using namespace std;

void swapPointer(int* a, int* b) // or we can use swapPointer(int &a, int&b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void swapReferenceVar(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int & swapReferenceVariable(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
    return a;
}


int main(){
    int x=4, y=5;

    cout<<"the value before the swap are x= "<<x <<" y=" <<y<<endl;
    swapPointer(&x,&y);
    cout<<"the value after the swap are x= "<<x <<" y=" <<y<<endl;

// now swap by reference variable....

    cout<<"the value before the swap are x= "<<x <<" y=" <<y<<endl;
   swapReferenceVar(x , y);
    cout<<"the value after the swap are x= "<<x <<" y=" <<y<<endl;
    
    
    cout<<"the value before the swap are x= "<<x <<" y=" <<y<<endl;
   swapReferenceVariable(x , y)=70;
    cout<<"the value after the swap are x= "<<x <<" y=" <<y<<endl;
   return 0;
}