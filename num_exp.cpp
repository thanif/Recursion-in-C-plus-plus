#include<bits/stdc++.h> 
using namespace std; 
  
int power(int num, unsigned int n) 
{ 
    if (n == 0) 
        return 1; 
    else if (n%2 == 0) 
        return power(num, n/2)*power(num, n/2); 
    else
        return num*power(num, n/2)*power(num, n/2); 
}
  
int num_exp(int x, int n, int curr_num = 1, 
                   int curr_sum = 0) 
{ 
    
    int results = 0; 
  
    int p = power(curr_num, n); 
    
    
    
    while (p + curr_sum < x) 
    { 
        
        results += num_exp(x, n, curr_num+1, p+curr_sum); 
        curr_num++; 
        p = power(curr_num, n); 
        
    } 
  
    
    if (p + curr_sum == x)
    {
        cout<<x<<" = ";
        cout<<sqrt(curr_sum)<<"^2"<<" + ";
        cout<<sqrt(p)<<"^2"<<endl; 
        results++; 
    }
    
    return results; 
} 
  
int main() 
{ 
    int x = 0, n = 0;
    cout<<"Enter the value of X "<<endl;
    cin>>x;
    if (x>100 or x<1)
    {
    	cout<<"X exceeds it's limit"<<endl;
    }
    else
    {
    cout<<"Enter the value of N "<<endl;
    cin>>n; 
    if (n<2 or n>10)
    {
    	cout<<"N exceeds it's limit"<<endl;
    }
    else
    {
 
    	cout<<"The number of ways are : "<<num_exp(x, n)<<endl;
    } 
    }
    return 0; 
} 
