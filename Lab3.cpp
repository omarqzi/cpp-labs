// Name: Omar Qazi 
// Date: 02/20/2024 

#include <iostream> 
using namespace std; 
 
int main() 

{ 
    //Declarations 
    int num1; 
    int num2; 
    int sum; 
    int diff; 
    int prod; 
    float quot; 
    int mod; 

    //Input 
    cout << "Enter two integer values" << endl; 
    cin >> num1 >> num2; 

    sum = num1 + num2; 
    cout << num1 << " + " << num2 << " is " << sum << endl; 
 
    diff = num1 - num2; 
    cout << num1 << " - " << num2 << " is " << diff << endl; 

    prod = num1 * num2; 
    cout << num1 << " * " << num2 << " is " << prod << endl; 

    quot = (float) num1 / num2;
    if (num2 > 0) 
    {  
        quot = (float) num1 / num2; 
        cout << num1 << " / " << num2 << " is " << quot << endl; 

        mod = num1 % num2; 
        cout << num1 << " % " << num2 << " is " << mod << endl; 
    } 
    else 
    {   
        quot = 0;
        mod = 0; 
        cout << num1 << " / " << num2 << " is " << quot << endl; 
        cout << num1 << " % " << num2 << " is " << mod << endl;
        cout << "Cannot divide by zero!" << endl; 
    } 

    return 0; 
} 