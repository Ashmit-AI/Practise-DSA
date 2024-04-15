#include<bits/stdc++.h>
using namespace std;

void max(int n , int arr[]){
	int max = arr[0];
	
	for(int i=1 ; i<n; i++){
		
		if(max < arr[i]){
			max = arr[i];
			
		}
		
		
	}
	cout<<max;
	
}

int main(){
	
	int n=5;
	int arr[]= {23,4,2,89,3};
	max(5,arr);
	
	
	return 0;
	
}
