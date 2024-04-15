// Find Unique Element in the array

#include<bits/stdc++.h>
using namespace std;

 int findUnique(int *arr,int size){
 	int ans =0;
 	
 	for(int i=0; i<size; i++){
 		ans = ans^arr[i];
 		
	 }
	 
	 return ans;
	 
 }
int main(){
	int size = 6;
	
	int arr[6]= {23,4,23,5,4,6};
	
	cout<<findUnique(arr, 6);
	
	
	return 0;
	
}
