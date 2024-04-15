#include<bits/stdc++.h>
using namespace std;


 
 
 bool isPresent(int arr[3][4], int key){
 	
 	 for(int i=0; i<3; i++){
 	 	
 	 	for(int j=0; j<4; j++){
 	 		
 	 		if(arr[i][j] == key){
 	 			return  true;
 	 			
			  }
		  }
	  }
	  return false;
 }
int main(){
	
	 int arr[3][4]= { {12,2,1,7} , {6,8,9,4} , {6,3,2,1}};
// int key =4;
	int key;
	 cout<<"Enter the element to be search for"<<endl;
	 
	 cin>>key;
	 cout<<isPresent(arr,key);
	 return 0;
	
}
