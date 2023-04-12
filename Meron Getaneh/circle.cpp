#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float radius,circumference,area;
    const float PI=3.14;
    cout<<"enter the radius:\n";
    cin>>radius;
    area=PI*pow(radius,2);
    circumference=2*PI*radius;
    cout<<"the area is"<<area<<endl;
    cout<<"the circumference is"<<circumference<<endl;
}