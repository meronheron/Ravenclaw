//hallow full pyramid
#include<iostream>
using namespace std;
int main()
{
    int r,a,b;
    cout<<"enter the number of rows you want:";
    cin>>r;
    for( a=1;a<=r;a++)
    {
        for(b=1;b<=2*r-1;b++)
        {
        if(a==r || a+b==r+1 || b-a==r-1){
            cout<<"*";
         }else{
            cout<<" ";
         }
        }
        cout<<endl;
    }
}