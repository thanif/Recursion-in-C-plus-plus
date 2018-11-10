#include<iostream>
using namespace std;

int fib(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fib(num - 1) + fib(num - 2));
    }
}
 
int main()
{

    int num;
    int result;
 
    cout<< "Enter a number to get the corresponding number in fibonacci series: "<<endl;
    cin>> num;
    
    if (num < 0)
    {
        cout<< "Fibonacci of negative number is not possible."<<endl;
    }
    else
    {
        result = fib(num);
        cout<< "The corresponding number in fibonacci series is "<<result<<endl;
    }
    
    return 0;
    
}
