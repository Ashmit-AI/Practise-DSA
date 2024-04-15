#include<bits/stdc++.h>
using namespace std ;

int main(){
	int n;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	
	int newnum =0;
	while( n != 0){
		int x = n%10;
		n = n/10;
		
		  newnum = newnum * 10 + x;
		  
		  
	}
	cout<<newnum;
	
	if(newnum == n){
		cout<<"No. is Palindrome"<<endl;
		
	}
	else{
		cout<<"No. is not a Palindrome number"<<endl;
	}
	return 0;
	 
}
