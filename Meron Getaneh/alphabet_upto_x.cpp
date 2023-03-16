//aplhabet up to x pyramid
#include<iostream>
using namespace std;
int main() {
    char letter='a';
    for(int a=1;a<=4;a++){
        for(int b=1;b<=6;b++){
            if(letter>'x'){
                break;
            }
            cout<<letter<<" ";
            letter++;
        }
        cout<<endl;
        
    }
}