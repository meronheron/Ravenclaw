//inverted full pyramid
#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"enter the number of rows you want:";
    cin>>row;
    for(int i=row;i>=1;i--)
    {
        for(int j=row;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<2*i;k++)
        {
          cout<<"*";
        }
         cout<<endl;
    }
}