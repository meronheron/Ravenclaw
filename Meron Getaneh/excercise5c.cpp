#include<iostream>
using namespace std;
int main()
{
    int column,row,count=10;
    cout << "Enter the number of rows: ";
    cin>>row;
    cout<<"enter the number of columns:";
    cin>>column;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
        cout << count << " ";
        count++;
        }
        cout<<endl;
    }
}