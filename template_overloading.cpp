#include<iostream>
using namespace std;

template <class T>
class Vishal{
    public:
    T data;
    Vishal(T a){
        data=a;
        }
    void display();    

};

template <class T>
void Vishal<T>::display(){
    cout<<data;
}

void func(int a){
    cout<<"i am the first func() "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"i am the templatized func() "<<a<<endl;
}

int main(){
    // Vishal<float> h(7.4);
    // Vishal<int> h(7.4);
    // Vishal<char> h('c');
    // cout<<h.data<<endl;
    // h.display();

    func(4);// exacct match will have the higest priority
    func(4.4);

   return 0;
}