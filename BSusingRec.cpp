#include<iostream>
using namespace std;

 bool isSorted(int arr[] , int size){
	// base case
	
	if(size==0 || size==1)
	return true;
	
	if(arr[0]>arr[1])
	return false;
	
	else{
	
	 bool ans = isSorted(arr+1, size-1);
	 return ans;
}
	 
}
int main(){
	int size1;
	int arr1[size1];
	cout<<"Enter the size of the array: "<<endl;
	cin>>size1;
	
	cout<<"Enter the array: ";
	for(int i=0; i<=size1; i++){
		cin>>arr1[i];
		
	}
	cout<<isSorted(arr1[], size);
	
	return 0;
	
}
