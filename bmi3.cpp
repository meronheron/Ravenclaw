// calculate bmi
#include <iostream>
using namespace std;
int main()
{
    char gender;
    float weight;
    float height;
    float bmi;
    cout<<"enter gender:\n";
    cin>>gender;
    cout<<"enter your weight:\n";
    cin>>weight;
    cout<<"enter your height:\n";
    cin>>height;
    bmi=weight/(height*height);
if (gender=='f'&& bmi<18){
  cout<<"you gotta eat girl:\n";
}else if(gender=='f'&& bmi>23){
 cout<<"start working out:\n";
}else if(gender=='f'&& bmi>=18&& bmi<=23){
cout<<"you are doing great:\n";
}else if(gender=='m'&& weight<20){
    cout<<"you are overweight:\n";
}else if(gender=='m'&& weight>30){
cout<<"hit the gym :\n";
}else{
    cout<<"your doing well:\n";
}
}

