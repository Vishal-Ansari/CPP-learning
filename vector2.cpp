#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v){
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector <int> vec; // zero length integer vector
    vector <char> vec1(4);// 4-element charcacter vector 
    vector <char> vec2(vec1);// 4 elements charcter vector from arr 1
    vector <int> v(6,3);// 6 elements vecctor of 3s
    vec1.push_back('5');
    display(vec1);
    display(v);
   return 0;
}