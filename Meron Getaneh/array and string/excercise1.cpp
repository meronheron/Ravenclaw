#include<iostream>
#include<cstring>
using namespace std;
int main()
{

char id[6][11]={"ets1043/14","ets1045/14","ets1070/14","ets1030/14","ets0997/14","ets0824/14"};     
 char input[11];
    cout<<"enter you id number";
    cin>>input; 
    for(int i=0;i<=5;i++){
    if(!strcmp(id[i],input)){
        cout<<"your id is"<<" "<<input;
        return 0;
         }
    } 
        cout<<"error";
    return 0;
}
