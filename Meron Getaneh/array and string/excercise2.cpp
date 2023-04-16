#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   string testAns="ABCDAABBCCDD";
   string user_answer;
   int score=0;
   cout<<"enter your answer for the MCQ:";
   getline(cin,user_answer);
   for(int i=0;i<testAns.length();i++){
        if(user_answer[i]==testAns[i]){
         score++;
        }                                                                                                                      
    }
    cout<<"your result is"<<score<<"out of"<<testAns.length()<<endl;
}






    
    
    

    
