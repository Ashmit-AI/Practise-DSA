#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int x =0;
		int y= 1;
		cout<<x <<y;
		n=x+y;
	while(n<13){
		n= x + y;
		x = y ;
		y = n;
		
		cout<<n;
	}

 
	return 0;
	
}
