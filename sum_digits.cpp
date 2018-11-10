#include<iostream>
using namespace std;
  
int sum_digits(int n) 
{ 
    if (n == 0) 
       return 0; 
    return (n % 10 + sum_digits(n / 10)); 
} 
  
int main() 
{ 
    
    cout<<"Enter a positive integer to get sum of it's digits "<<endl;
    int num = 0; 
    cin>> num;
    if (num >=0)
    {
    	int result = sum_digits(num); 
    	cout<<"Sum of digits is : "<<result<<endl;
    }
    else
    {
    	cout<< "The input provided is negative"<<endl;
    }	 
    return 0; 
} 
