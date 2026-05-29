#include <iostream>
using namespace std ;
int main ()
{
    while (true)
    {
        string stop ;
        int a , b ;
        char operation ;
        cout << "please enter your operation (- + * %) and  / for a/b: \n" ;
        cin >> operation ;
        cout << "please enter  operands a and b  : \n" ;
        cin >> a >> b ;
        if (operation == '+')
        {
            cout << a + b << endl ;
        }
        else if (operation == '-')
        {
            cout << a - b << endl ;
        }
        else if (operation == '*')
        {
            cout <<  a * b << endl ;
        }
        else if (operation == '/')
        {
            if (b == 0)
            {
                cout << "division by zero is invalid\n" ;
                
            }
            else 
            {
                cout << a * 1.0 / b << endl ;
            }
        }
        else if (operation == '%')
        {
            if (b == 0)
            {
                cout << "mod by zero is invalid\n" ;
            }
            else 
            {
                cout << a % b << endl ;
            }
        }
        else 
        {
            cout << "invalid operation \n" ;
        }
        cout << "if you want stop , enter stop : \n" ;
        cin >> stop ;
        if  (stop == "stop" || stop == "Stop" || stop == "sTOP")
        {
            break ;
        }
    }
    return 0 ;
}