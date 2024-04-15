// 2-D Array

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n1,n2;
	cout<<"Enter the row of the array: "<<endl;
	cin>>n1;
	cout<<"Enter the column  of the array: "<<endl;
	cin>>n2;
	
	int arr[n1][n2];

	cout<<"Enter the 2d array: "<<endl;	
	for(int i=0; i<n1;i++){
		
		for(int j=0; j<n2; j++){
			cin>>arr[i][j];
			
		}
	}
	

	for(int i=0; i<n1; i++){
		
		for(int j=0; j<n2; j++){
			cout<<arr[i][j]<<" ";
			
		}
		
		cout<<endl;
		
	}
	
	return 0;
	
}
