#include<iostream>
using namespace std;
int main()
{
    int term,t1=1;
    int t2=1,next_term=0;
    cout<<"enter the number of terms\n";
    cin>>term;
    cout<<"fibonanachi series\n";
    for(int i=1;i<=term;i++)
    {
        if(i==1)
        {
            cout<<t1<<" ";
            continue;
        } if(i==2)
        {
            cout<<t2<<" ";
            continue;
        }
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
        cout<<next_term<<" ";
    }

}