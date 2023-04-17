#include<iostream>
using namespace std;
int global;
int num=5;

int main()
{
    int num=10;
    cout<<::num;
}