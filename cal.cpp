
#include <iostream>
using namespace std;
/*
this porgram i crated a simple calculator i give my 100% and i crate a consol base UI so 
it feel real calculater and  i used ANCI code so color 
*/

int main() {
    double num1, num2;  
    char operation; //this store operation simple sign 
    cout<<"\033[33m_____________________________________"<<endl;
    cout<<"|   !Welcome to Basic Calculator!    |"<<endl;
    cout<<"_____________________________________|"<<endl;
    cout<<"|\033[30m[Enter first number:]--> \033[33m= ";
    cin >> num1;
    cout<<"\033[33m|------------------------------------|"<<endl;
    cout<<"|\033[32m[+] \033[31m[-] \033[34m[*] \033[35m[/] \033[36m[%]\033[33m:press =" ;
    cin >> operation;
    cout<<"|------------------------------------|"<<endl;
    
    cout<<"|\033[30m[Enter second number:]--> \033[33m=  ";
    cin >> num2;
    cout<<"|------------------------------------|"<<endl;
    
    cout<<"| ";
    switch (operation) {
        case '+':
            cout <<"Result: = \033[32m" << num1 + num2 <<"\033[33m"<< endl;
            break;

        case '-':
            cout << "Result: \033[31m" << num1 - num2 <<"\033[33m"<< endl;
            break;

        case '*':
            cout << "Result: \033[34m" << num1 * num2 <<"\033[33m"<< endl;
            break;

        case '/':
            if (num2 != 0)
            cout << "Result: \033[35m" << num1 / num2 <<"\033[33m"<< endl;
            else
            cout <<"\033[35m|""Error: Division by zero!" <<"\033[33m"<< endl;
            break;

        case '%':
            if ((int)num2 != 0)
            cout << "Result: \033[36m" << (int)num1 % (int)num2 <<"\033[33m"<< endl;
            else
            cout  <<"\033[36m|""Error: Modulus by zero!"<<"\033[33m" << endl;
            break;

        default:
            cout <<"\033[36m Invalid operation!" <<"\033[33m"<< endl;

    }
    cout<<"|                                    |"<<endl;
    cout<<"|                                    |"<<endl;
    cout<<"|------------------------------------|"<<endl;
    cout<<"|____________________________________|"<<"\033[0m"<<endl;

    return 0;
}
