#include<bits/stdc++.h>
using namespace std;

 int f(int i,int n){
	if(i>=n){
		return 1;
}else{

	cout<<"Ashmit"<<endl;
		
		
	f(i+1,n);
	}
	
	
	
}
int main(){
	int n;
	cout<<"Enter the value"<<endl;
	cin>>n;
	
	cout<<f(1,n);
	
	return 0;
	
}
