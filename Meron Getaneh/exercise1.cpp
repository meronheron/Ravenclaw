#include<iostream>
using namespace std;
#include <ctype.h>
int main()
{
    char z;
    cout<<"enter the symbol\n";
    cin>>z;
    if(isdigit(z))
    {
        
        switch (z%2)
        {
        case 0:
        cout<<"z is even\n";
        break;
        case 1:
        cout<<"z is odd\n";
        }
    }else if(isupper(z))
    {
    cout<<"z is uppercase\n";
    }else if(islower(z))
    {
        cout<<"z is lowercase\n";
    }else {
        cout<<"z is a special character";
    }
}

    

    
