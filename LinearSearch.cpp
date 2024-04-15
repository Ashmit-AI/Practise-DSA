// -> Linear Search of an Array

#include<iostream>
 using namespace std;
 
  bool linearSearch( int arr[] , int size ,int key){
  	 // base Case
  	 
  	   if(size == 0)
  	    return false;
  	    
  	    if(arr[0] == key){  
  	     return true;
  	     
		 
		   
		    }
		    
		    else{
		    	 bool remainingPart = linearSearch(arr+1 , size-1 , key);
		         return remainingPart;
		         
		         
			}
  }
 int main(){
 	int arr[] = {4,5,3,7,5,2};
 	int size = 5;
 	int key = 2;
 	
 	bool ans = linearSearch(arr ,size, key);
 	if(ans){
 		cout<<"Element is Present in the array"<<endl;
 		
	 }
	  else{
	  	 cout<<"Element is not Present in the array"<<endl;
	  	 
	  }
 	return 0;
 	
 }
