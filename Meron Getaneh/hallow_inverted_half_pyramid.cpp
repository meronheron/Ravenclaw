//hallow inverted full pyramid
#include <iostream>
using namespace std;
int main()
{
    int r,a,b;
    cout<<"enter the numner of rows you want:";
    cin>>r;
    for(a=r;a>=1;a--)
    {
    for(b= 1; b<= a; b++) 
    {
     if (a== r||b == 1|| b == a)
       {
        cout <<"*";
       }else {
        cout <<" "; 
       }  
    }
     cout <<endl;
    }
    }

