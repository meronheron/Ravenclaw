//grade calculator
#include <iostream>
#include <cmath>
using namespace std;
int main() {
float test,quiz,project,assignment,final_exam,total_mark;
first_input:
cout << " enter test result";
cin >> test;
if ( 0 > test || test > 15)
{
    cout << " invalid ";
    goto first_input;
}
second_input:
cout << " enter quiz result";
cin >> quiz;
if ( 0 > quiz ||quiz > 5)
{
    cout << " invalid ";
    goto second_input;
}
third_input:
cout << " enter project result ";
cin >> project;
if ( 0 > project || project > 20)
{
    cout << " invalid ";
    goto third_input;
}
fourth_input:
cout << " enter assignment result ";
cin >> assignment;
if ( 0 > assignment || assignment > 10)
{
    cout << " invalid ";
    goto fourth_input;
}
fifth_input:
cout << " enter final exam result";
cin>>final_exam;
if ( 0 > final_exam || final_exam > 50)
{
    cout << " invalid ";
    goto fifth_input;
}
total_mark= final_exam + test + quiz + project + assignment ;
cout << " your total mark "<< total_mark << endl;
// grading the total mark
if( total_mark >= 90)
{
    cout<< " a+";
}else if( total_mark >= 80){
    cout<< " a";
}else if( total_mark >= 75)
{
    cout<< " b +";
}else if( total_mark >=60 )
{
    cout<< " b";
}else if( total_mark >=55 )
{
    cout<< " c+";
}else if( total_mark >=45 )
{
    cout<< " c";
}else if( total_mark >=30 )
{
    cout<< " d";
}else if ( total_mark>=20)
{
    cout<< " f";
}else " invalid ";
}
