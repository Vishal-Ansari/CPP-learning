#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    cout<<endl;
    list<int>:: iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
}

int main(){
    list<int> list1;// list with 0 length
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(8);
    list1.push_back(9);

    cout<<"list 1 ele: ";
    display(list1);
    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);
    list1.remove(3);
    display(list1);

    // list<int> ::iterator iter;
    // iter=list1.begin();
    // cout<<endl<<*iter<<endl;
    // iter++;
    // cout<<*iter<<endl;

cout<<endl<<"list 2 ele: ";
    list<int> list2(3);// list with length 3 
    list<int>:: iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=75;
    iter++;
    *iter=65;
 display(list2);
//  list1.merge(list2);
//  cout<<endl<<"after merge list 1 is :  ";
//  display(list1);

//  list1.reverse();

cout<<endl<<"before swap";
 display(list1);
 display(list2);
cout<<endl<<"after swap";
 list1.swap(list2);
 display(list1);
 display(list2);
   return 0;
}