#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    //int menu
    int num;
    int rem;
    int digit;
    int r = 0;
    long factorial = 1.0;
    int digitn;
    int total;
    int rev;

    
    //menu section;
    char choice;
    cout<<"choose the operation yiu want to perform:\n";
    cout<<"a,printing the reverse of a number:\n";
    cout<<"b,counting number of digits:\n";
    cout<<"c,sum of digits of numbers:\n";
    cout<<"d,product of even digits of a number:\n";
    cout<<"e,print the first and last digit of a number including their sum:\n";
    cout<<"f,to swap the first and last digit of a number:\n";
    cout<<"g,to check whether a number is palindrome or not:\n";
    cout<<"h,to find the frequency of each digit of a number and  print it in tablular form:\n";
    cout<<"i,armstrong checker:\n";
    cout<<"j,strong checker:\n";
    cout<<"k,perfect number checker:\n";
    cout<<"enter your choice:\n";
    cin>>choice;
    switch(choice){
        case 'a':
            cout<<"enter the number:\n";
            cin>>num;
            while(num)
            {
            r=num%10;
            cout<<r<<"";
            num=num/10;
            rev=(rev*10)+r;
            }
            break;
        case'b':
            cout<<"Enter a number: ";
            cin>> num;
            while(num>0)
            {
            total++;
            num /=10;
            }
            cout<<"Total digits = " << total;
            cout<<endl;
            break;
        case 'c':
            cout<< "Enter the number: ";
            cin>> num;
            while(num>0){
            rem = num%10;
            r = r + rem;
            num/=10;
            } 
            cout<<"The sum of the digits = " << r;
            cout<< endl;
            break;
        case 'd':
            cout<<"enter a number:";
            cin>>num;
            r=1;
            while(num>0)
            {
                rem=num%10;{
                    r=r*rem;
                }
                num=num/10;
            }
            cout<<"the product of the even digits is"<<r;
            break;
        case 'e':
            cout << "Please enter a number ";
            cin >> num;
            rem = num % 10;
            while (num >= 10){
            num = num /10;
            }
            cout << "The first digit is"<< num <<" "<<"The last digit is "<< rem << endl;
            num = num+ rem;
            cout<< "The sum is"<< num;
        case 'f':
            int swap,first_digit,last_digit;
            cout << " enter any number:";
            cin >> num;
            digit = log10(num);
            r = pow(10,digit);
            first_digit = num / r;
            num = num % r;
            last_digit = num % 10;
            num = num / 10;
            swap = last_digit * r + num * 10 + first_digit;
            cout << "Swapped value is : " << swap;
            break;
        case 'g':
           int old;
            r= 0;
            cout << " enter any number:";
            cin >> num;
            old = num;
            do {
                digit = num % 10;
                r = (r * 10) + digit;
                num = num / 10;
            } while (num != 0);
            cout << r;
            if (old == r) {
            cout << " The number is a palindrome.";
            } else {
            cout << " The number is not a palindrome.";
            }
            break;

        case 'h':
            cout << " enter any number: ";
            cin >> num;
            int a, b, count;
            for (a = 0; a < 10; a++)
            {
                cout << a << " = ";
                count = 0;
                for (b = num; b > 0; b = b / 10)
                {
                    r = b % 10;
                    if (r == a)
                    {
                        count++;
                    }
                }
                cout << count << endl;
            }
            break;
        case 'i':
            int original;
            cout << " enter any number:";
            cin >> num;
            original = num;
            r=0;

            while(num>0)
            {
                rem = num%10;
                int cube = pow (rem, 3);
                r = r + cube;
                num = num/10;
            }
            if (r == original){
                cout<< "The number " << original << " is an armstrong number.";
            } else {
                cout<< "The number " << original << " is not an armstrong number.";
            }

            break;

        case 'j':
            r = 0;

            cout << " enter any number:";
            cin >> num;
            original = num;

            while(num>0)
            {
                factorial = 1;
                rem = num%10;
                for(int i=1;i<=rem;i++){
                    factorial = factorial * i;
                }
                r = r + factorial;
                num = num/10;
            }
            if (r == original) {
                cout <<"the number " << original << " is a strong number.";
            } else {
                cout <<"the number " << original << " is not a strong number.";
            }

                break;

        case 'k':
            cout << " enter any number:";
            cin >> num;

            for(int i = 1; i< num; i++){
                if(num % i == 0)
                    r = r + i;
            }

            if(r == num) {
                cout << num << " is a perfect number";
            } else {
                    cout << num << " is not a perfect number";
                }
            break;

        default:
            cout <<"invalid input";
    }
    return 0;

   





    
    
         

        
}