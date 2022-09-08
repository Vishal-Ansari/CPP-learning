#include<iostream>
#include<map>
#include<string>
using namespace std;



int main(){
    map <string, int> marksMap;
    marksMap["Vishal"]=93;
    marksMap["Gun"]=89;
    marksMap["Bulbul"]=92;

marksMap.insert({{"teja",92}, {"pratham",94},{"anmol",89}});
    map<string,int> ::iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n ";
    }
   return 0;
}