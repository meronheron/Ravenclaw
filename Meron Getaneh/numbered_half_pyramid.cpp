//numbered half pyramid
#include<iostream>
using namespace std;
int main()
{
 int r;
 cout<<"enter the number of rows you want:";
 cin>>r;
 for(int a=1;a<=r;a++)
 {
    for(int b=1;b<=a;b++)
    {
     cout<<b<<" ";
    }
    cout<<endl;
 }

}