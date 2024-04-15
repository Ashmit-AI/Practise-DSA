#include<bits/stdc++.h>
using namespace std;

	

int main(){
	int n;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	
	

	int x,y,num=0;
	while(n!=0){
		
		x = n%10;
		y=x/10;
		
		num = num*10+x;
		return num;
		
	}
	cout<<num;
	
	return 0;
	
}
