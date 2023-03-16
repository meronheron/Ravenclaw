//full pyramid
#include <iostream>
using namespace std;
int main()
{
    int i,gap,j;
    for(i=1;i<=6;i++)
    {
        for(gap=6;gap>i;gap--){
        cout<<" ";
        }
        for (j=0;j<i;j++){
        cout<<"* ";
        }
        cout<<endl;
    }
        cout<<endl;
}