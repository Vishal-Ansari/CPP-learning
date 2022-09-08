#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    // string st="123";
    // int num;

    // num=stoi(st);
    // cout<<num;
    int num;
    cin>>num;
    string st=to_string(num);
    reverse(st.begin(),st.end());
    cout<<st;
    cout<<st.length();  
   return 0;
}

