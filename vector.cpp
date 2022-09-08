#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector <int> arr;
    int element,size;
    cout<<"enter the size of the vector: ";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cout<<"enter the element to ad to the array:  ";
        cin>>element;
        arr.push_back(element);
    }
    cout<<"the elements are :  ";
    display(arr);
    // arr.pop_back();
    // cout<<"afte poppig elements are: ";

vector<int>:: iterator iter=arr.begin();// creates the iterator and points iter variable to begininng element 
arr.insert(iter, 566);// inseert the elements 566 at the beginng
    display(arr);
arr.insert(iter+2, 96);// inseert the elements 96 at the 3rd positon
    display(arr);
arr.insert(iter+4,3, 76);// inseert the elements 76 at the 5rd positon 3 TIMES
    display(arr);



   return 0;
}