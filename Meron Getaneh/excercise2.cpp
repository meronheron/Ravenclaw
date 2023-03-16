//income calulator
#include <iostream>
using namespace std;
int main()
{
    // declare the variables
    float gross_salary;
    float net_salary;
    float income_tax_rate;
    float income_tax;
    float pension;
    int work_hours;
    int over_time;
    char condition;
    // get the input
    cout<<"enter your gross salary:\n";
    cin>>gross_salary;
    cout<<"is your work our greater or less than fourty?if <=40 enter a if its >40 enter b"<<endl;
    cin>>condition;
    cout<<"enter the work hours:\n";
    cin>>work_hours;
    cout<<"enter income tax rate in percent:\n";
    cin>>income_tax_rate;
    //calculate net salary
    pension=gross_salary*0.07;
    income_tax= (gross_salary*income_tax_rate/100);
    over_time=gross_salary*(work_hours-40);

    switch(condition){
        case 'a':
        if(gross_salary<=200){
            net_salary=gross_salary-pension;
            cout<<"your net salary is"<<net_salary<<endl;
        }else if(gross_salary>200 && gross_salary<=600){
            net_salary=gross_salary-(pension+(gross_salary*0.1));
        } else if(gross_salary>600 && gross_salary<=1200){
            net_salary=gross_salary-(pension+(gross_salary*0.15));
        } else if(gross_salary>1200 && gross_salary<=2000){
            net_salary=gross_salary-(pension+(gross_salary*0.2));
        } else if(gross_salary>2000 && gross_salary<=3500){
            net_salary=gross_salary-(pension+(gross_salary*0.25));
        } else if(gross_salary>3500){
            net_salary=gross_salary-(pension+(gross_salary*0.3));
        }
        break;
        case 'b':
        if(gross_salary>200){
        net_salary=gross_salary-pension+over_time;
        cout<<"your net salary is"<<net_salary<<endl;
        }else if(gross_salary>200 && gross_salary<=600){
            net_salary=gross_salary+over_time-(pension+(gross_salary*0.1));
        } else if(gross_salary>600 && gross_salary<=1200){
            net_salary=gross_salary+over_time-(pension+(gross_salary*0.15));
        } else if(gross_salary>1200 && gross_salary<=2000){
            net_salary=gross_salary+over_time-(pension+(gross_salary*0.2));
        } else if(gross_salary>2000 && gross_salary<=3500){
            net_salary=gross_salary+over_time-(pension+(gross_salary*0.25));
        } else if(gross_salary>3500){
            net_salary=gross_salary+over_time-(pension+(gross_salary*0.3));
        }
        break;


    }
}