//  Reverse an String using the Recursion




#include<bits/stdc++.h>
using namespace std;

 void reverse(int i ,int j ,string& str){
 	// base case
 	
 	 if(i>j){
 	 	return ;
 	 }
	  else{
	  
	  	 swap(str[i], str[j]);
	  	 i++;
	  	 j--;
	  	 
}
	  reverse(i,j,str);
}
 
 
 int main(){
 	string name = "Ashmit";
 	
 reverse(0 , name.length()-1 , name);
    cout<<name<<endl;
 	return 0;
 	
 }
