 // Print the reverse of the array 
 
 #include<bits/stdc++.h>
 using namespace std;
 
  void reverse(int n , int arr[]){
  	  int i=0;
	  int j= n-1;
  	
  	while( i <j){
	  	swap(arr[i], arr[j]);
	  	i++;
	  	j--;
	  }
	   for(int i=0; i<n;i++){
	  	cout<<arr[i]<<" ";
	  	
	  }
  }
 int main(){
 	int n;
 	cout<<"Enter the size of the array: "<<endl;
 	cin>>n;
 	int arr[n];
 	cout<<"Enter the array: "<<endl;
 	for(int i=0; i<n; i++){
 		cin>>arr[i];
 		
	 }
 	reverse(n,arr);
 	
 	return 0;
 	
 }
