 // Find Unique Element

// ye dekhna hai garbage value de rha hai kyun

#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
  int ans =0;

  for(int i=0; i<size ; i++){
      ans = ans^arr[i];

  }  
  cout<<ans;
  
}


int main(){
	
	int size;
	
	cout<<"Enter the size of the array: "<<endl;
	cin>>size;
	int arr[size];
	
	cout<<"Enter the array: "<<endl;
	
	for(int i=0; i<size; i++){
		cin>>arr[size];
		
	}	
	
	findUnique(arr, size);
	 
	return 0;
	
}
