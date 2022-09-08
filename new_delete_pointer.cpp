#include<iostream>
using namespace std;

int main(){
    int a=4;
    int* ptr=&a;
    cout<<"the value of a is "<<*(ptr)<<endl;

// dynamic pointer using new and delete
    int *p= new int(40);
    cout<<"the value at address p is "<< *(p)<<endl; 

    int *arr= new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;

    cout<<"the value at arr[0] is "<<arr[0]<<endl;
    cout<<"the value at arr[1] is "<<arr[1]<<endl;
    cout<<"the value at arr[2] is "<<arr[2]<<endl;
    delete[] arr;
    cout<<"the value at arr[0] is "<<arr[0]<<endl;
    cout<<"the value at arr[1] is "<<arr[1]<<endl;
    cout<<"the value at arr[2] is "<<arr[2]<<endl;
   return 0;
}