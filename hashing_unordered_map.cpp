#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> umap;
    umap["Vishal"]=99;
    umap["Ansari"]=98;
    umap["Shariq"]=87;
    umap["shadmani"]=34;


    for(auto it=umap.begin(); it!=umap.end();it++)
    cout<<it->first<<" "<<it->second<<endl;

    if(umap.find("Vishal")!=umap.end()){
    cout<<"key found"<<endl;
        auto temp=umap.find("Vishal");
        cout<<"key is : "<<temp->first<<"  value is : " <<temp->second<<endl;
    }

    umap.erase("Ansari");
    umap.insert(make_pair("mobile",10000));
    for(auto x: umap)
    cout<<x.first<<" "<<x.second<<endl;
    cout<<umap.size()<<endl;


//working with arrays
 int arr[]={7,8,5,9,6,4,7,8,5,2,3,6,5,4,7,8,9};
 unordered_map<int,int> imap;
 for(int i=0;i<17;i++)
{
    int key=arr[i];
    imap[key]++;
}
    for(auto x: imap)
    cout<<x.first<<" "<<x.second<<endl;// fisrt gives the value and second gives the frequency 

   return 0;
}