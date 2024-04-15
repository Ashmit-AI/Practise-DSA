#include<bits/stdc++.h>
using namespace std;
 int fact(int n){
	int fact =1;

 	for(int i=1; i<=n; i++){
 		 fact = fact*i;
 		 
 		 
	 }
	 return fact;
 }
int main(){
	
	int x;
	cout<<"Enter the number: "<<endl;
	cin>>x;
	
	cout<<fact(x);
	
	return 0;
	
}
