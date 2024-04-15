// Print name n times

#include<bits/stdc++.h>
using namespace std;

 void repeat(int i, int n){
 	if(i != n){
 		return ;
 		
	 }
	 
	 else{
	 	cout<<"Ashmit"<<endl;
	 	
	 }
	 
	 repeat(i+1 , n);
	 
 }
int main(){
	int n ;
	cout<<"Enter the number n"<<endl;
	cin>>n;
	repeat(1,n);
	 
	
	return 0;
	
}
