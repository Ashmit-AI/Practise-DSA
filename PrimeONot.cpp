// Prime or not 

#include<bits/stdc++.h>
using namespace std;

int main(){
	int flag=0;
	int n=5;
	for(int i=2; i<n; i++){
		 if(n%i == 0){
		 	flag++;
		 	break;
		 	
		 }
	}
	if(flag==1)
	{
		printf("Not prime");
	}
	else
	{
		printf("Prime");
	}
	
	return 0;
	
}
