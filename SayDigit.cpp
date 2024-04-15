 //   -> Say Digit 

#include<iostream>
 using namespace std;
 
    void sayDigit(int n, int arr){
    	 
    	 // base case
    	 if( n == 0){
    	 	 return ;
    	 	 
    	 	 // processing
    	 	 
    	 	 int digit = n%10;
    	 	 n = n /10;
    	 	 int arr[digit];
    	 	 
    	 	 cout<< arr[digit]<<" ";
    	 	 
    	 	 // recursive call
    	 	 sayDigit(n,arr);
    	 	 
		 }
	}
 int main(){
 	
 	string arr[10]  = { "zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" ,"eight", "nine"};
 	
 	int n;
 	cin>>n;
 	
 	cout<<endl<< endl << endl;
 	sayDigit(n,arr);
 	
 	cout<<endl <<endl<<endl;
 	
 	

 	
 	return 0;
 	
 }
