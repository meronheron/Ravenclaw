#include <iostream>
using namespace std;
int main()
{
    int num,r,reverse=0;
    cout<<"enter the number:\n";
    cin>>num;
    while(num)
     {
        r=num%10;
        cout<<r<<"";
        num=num/10;
        reverse=(reverse*10)+r;
    }
    }