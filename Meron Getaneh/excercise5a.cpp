#include<iostream>
using namespace std;
int main() {
    int num = 10;
    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= 10; col++) {
            cout << num << "\t";
            num++;
        }
       cout<<endl;
    }
    return 0;
}