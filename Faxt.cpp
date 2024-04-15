 // Factorial Code for Recursion
 
#include<iostream>
using namespace std;
 
 
int fact(int n)
{
  	
  	if(n==0){
  		return 1;
  		
	  }
	   
  	int factorial = n*fact(n-1);
  	return factorial;
}
 
 
int main()
{
 	int n;
	 cout<<"Enter the number of the factorial: "<<endl;
	 cin>>n;
	  
 	
 	int answer =  fact(n);
 	cout<<"The factorial of the number is: "<<answer<<endl;
 	
 	
 	return 0;
 	
 }
